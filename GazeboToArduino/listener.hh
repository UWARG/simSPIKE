#ifndef _LISTENER_HH_
#define _LISTENER_HH_

#include <list>
#include <boost/thread.hpp>
#include <boost/program_options.hpp>
#include <boost/algorithm/string.hpp>

#include "gazebo/transport/transport.hh"
#include "gazebo/common/common.hh"
#include "gazebo/msgs/msgs.hh"

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

class RxDataPacket
{
  private:
    float throttle;
    float aileron;
    float elevator;
    float rudder;

  public:
    RxDataPacket();
    void UnPackData(std::string input);

    float getThrottle()
    {
      return this->throttle;
    }

    float getAileron()
    {
      return this->aileron;
    }

    float getElevator()
    {
      return this->elevator;
    }

    float getRudder()
    {
      return this->rudder;
    }

};

RxDataPacket::RxDataPacket()
{
  this->throttle = 0;
  this->aileron = 0;
  this->elevator = 0;
  this->rudder = 0;
}

void RxDataPacket::UnPackData(std::string input)
{
  std::vector<std::string> strs;
  boost::split(strs, input, boost::is_any_of(","));

  float unpackConvert = 10000;
  this->throttle = atof(strs[0].c_str());///unpackConvert;
  this->aileron = atof(strs[1].c_str())/unpackConvert;
  this->elevator = atof(strs[2].c_str())/unpackConvert;
  this->rudder = atof(strs[3].c_str())/unpackConvert;
}





class TxDataPacket
{
  private:
    double x;
    double y;
    double z;

    double Y;
    double P;
    double R;
    

  public:
    TxDataPacket();
    std::string GetString();
    
    void set_x(double input){
      x = input;
    }

    void set_y(double input){
      y = input;
    }

    void set_z(double input){
      z = input;
    }

    void set_Y(double input){
      Y = input;
    }

    void set_P(double input){
      P = input;
    }

    void set_R(double input){
      R = input;
    }
};

TxDataPacket::TxDataPacket()
{
  x = 0;
  y = 0;
  z = 0;

  Y = 0;
  P = 0;
  R = 0;
}

std::string TxDataPacket::GetString()
{
  std::ostringstream sx, sy, sz, sY, sP, sR;
  sx << x;
  sy << y;
  sz << z;
  sY << Y;
  sP << P;
  sR << R;

  std::string output = "(" + sx.str() + "," + sy.str() + "," + sz.str() + "," + sY.str() + "," + sP.str() + "," + sR.str() + ")";  
  return output;
}

namespace gazebo
{
  namespace po = boost::program_options;
  
  class Command
  {
  	/// \brief Constructor
    /// \param[in] _name Name of the command.
    /// \param[in] _brief One line command description.
    public: Command(const std::string &_name, const std::string &_brief);

    /// \brief Destructor
    public: virtual ~Command();
    
  	protected: po::variables_map vm;
  };
}



class PlaneController
{
  private:
    gazebo::transport::PublisherPtr controlPub;
    gazebo::transport::NodePtr gzNode;

  public:
    PlaneController(gazebo::transport::NodePtr inputNode);
    void Init(gazebo::transport::NodePtr inputNode);
    void SetThrottle(float input);
    void SetAileron(float input);
    void SetElevator(float input);
    void SetRudder(float input);
    void SetFlaps(float input);
};


/////////////////////////////////////////////////
PlaneController::PlaneController(gazebo::transport::NodePtr inputNode)
{
  // Initialize transport.
  this->gzNode = inputNode;
  this->controlPub = this->gzNode->Advertise<gazebo::msgs::Aircraft>("/gazebo/default/aircraft_control");
}

/////////////////////////////////////////////////
void PlaneController::SetThrottle(float input)
{
  // if (input < 0)
  //   input = 0;
  // else if (input > 1)
  //   input = 1;

  gazebo::msgs::Aircraft msg;
  msg.set_cmd_propeller_speed(input);
  controlPub->Publish(msg);
}

/////////////////////////////////////////////////
void PlaneController::SetAileron(float input)
{
  gazebo::math::Angle aileron;
  aileron.SetFromDegree(input);

  if (aileron.Degree() < -30)
    aileron.SetFromDegree(-30);
  else if (aileron.Degree() > 30)
    aileron.SetFromDegree(30);

  gazebo::msgs::Aircraft msg;
  msg.set_cmd_left_aileron(input);//aileron.Radian());
  msg.set_cmd_right_aileron(input);//-aileron.Radian());
  controlPub->Publish(msg);
}

/////////////////////////////////////////////////
void PlaneController::SetElevator(float input)
{
  gazebo::math::Angle elevator;
  elevator.SetFromDegree(input);

  if (elevator.Degree() < -30)
    elevator.SetFromDegree(-30);
  else if (elevator.Degree() > 30)
    elevator.SetFromDegree(30);

  gazebo::msgs::Aircraft msg;
  msg.set_cmd_elevators(input);//elevator.Radian());
  controlPub->Publish(msg);
}

/////////////////////////////////////////////////
void PlaneController::SetRudder(float input)
{
  gazebo::math::Angle rudder;
  rudder.SetFromDegree(input);

  if (rudder.Degree() < -30)
    rudder.SetFromDegree(-30);
  else if (rudder.Degree() > 30)
    rudder.SetFromDegree(30);

  gazebo::msgs::Aircraft msg;
  msg.set_cmd_rudder(input);//rudder.Radian());
  controlPub->Publish(msg);
}

/////////////////////////////////////////////////
void PlaneController::SetFlaps(float input)
{
  gazebo::math::Angle flap;
  flap.SetFromDegree(input);

  if (flap.Degree() < -30)
    flap.SetFromDegree(-30);
  else if (flap.Degree() > 30)
    flap.SetFromDegree(30);

  gazebo::msgs::Aircraft msg;
  msg.set_cmd_rudder(input);//flap.Radian());
  controlPub->Publish(msg);
}


#endif