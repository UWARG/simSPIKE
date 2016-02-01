/*
 * Copyright (C) 2012-2015 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
 #include <signal.h>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>

#include <gazebo/common/common.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>
#include <gazebo/gazebo.hh>
 #include <sdf/sdf.hh>

#include <iostream>
#include "listener.hh"
#include "ArduinoComms.hh"
// #include "CessnaStateUpdate.hh"


using namespace gazebo;

// using namespace gazebo;
math::Pose pose;
TxDataPacket sendData;
Arduino arduino;

/////////////////////////////////////////////////
// Function is called everytime a message is received.
//void cb(ConstPosesStampedPtr &posesStamped)
void cb(ConstIMUPtr &imuData)
{

  // std::cout << imuData->DebugString();
  // std::cout << imuData->entity_name() << std::endl;
  // std::cout << imuData->orientation() << std::endl;
  //const ::gazebo::msgs::IMU &data = imuData->pose(0);
  // ::google::protobuf::int32 sec = imuData->time().sec();
  // ::google::protobuf::int32 nsec = imuData->time().nsec();
  // std::cout << "Read time: sec: " << sec << " nsec: " << nsec << std::endl;

  // for (int i =0; i < posesStamped->pose_size(); ++i)
  // {
  //   //Get the Pose data
  //   const ::gazebo::msgs::IMU &pose = posesStamped->pose(i);
  //   std::string name = pose.entity_name();

  //   //If we're looking at the pose of the cessna
  //   //if (name == std::string("cessna_c172"))
  //   if (name == std::string("lift_drag_demo_model"))
  //   {
  //     //Get the Position Data (x, y, z)
  //     const ::gazebo::msgs::Vector3d &position = pose.position();

  //     //Get the Orientation Data (in Quarternions)
  //     const ::gazebo::msgs::Quaternion &orientation = pose.orientation();

  //const ::gazebo::msgs::IMU &data = imuData;
  
  const ::gazebo::msgs::Quaternion &orientation = imuData->orientation();
      //Break out the values from the Quarternion and convert to YPR
      double w = orientation.w();
      double x = orientation.x();
      double y = orientation.y();
      double z = orientation.z();

      double sqw = w*w;    
      double sqx = x*x;    
      double sqy = y*y;    
      double sqz = z*z; 

      double PI = 3.14159265358979;

      //YPR conversions from Quarternion
      double yaw = (atan2(2.0 * (x*y + z*w),(sqx - sqy - sqz + sqw)) * (180.0f/PI));
      double pitch = (atan2(2.0 * (y*z + x*w),(-sqx - sqy + sqz + sqw)) * (180.0f/PI));          
      double roll = (asin(-2.0 * (x*z - y*w)) * (180.0f/PI));

      //Gazebo does a funky thing and goes from 0 to 180, then -180 to -0 at the rollover (i.e. not 0 to 360)
      //Perform conversions to get a 0 to 360 value
      //if yaw = -150, then it should be 210deg in a 0 to 360deg range, therefore 360-150 = 210;
      //the yaw would be negative, therefore add 360 to the yaw if it is negative (less than 0)
      if (yaw < 0){
        yaw += 360;
      }
      if (pitch < 0){
        pitch += 360;
      }
      //Roll might not be correct
      if (roll < 0){
        roll += 360;
      }

      sendData.set_Y(yaw);
      sendData.set_P(pitch);
      sendData.set_R(roll);

      gazebo::math::Quaternion temp1(w,x,y,z);
      double pitch2 = temp1.GetPitch()* (180.0f/PI);
      double roll2 = temp1.GetRoll()* (180.0f/PI);
      double yaw2 = temp1.GetYaw()* (180.0f/PI);
      //std::cout << "roll: " << roll << std::endl;
      //Print the values out to the console for debugging
      //printf("pitch: %1.3f;  roll: %1.3f;  yaw: %1.3f\n pitch2: %1.3f;  roll2: %1.3f;  yaw2: %1.3f\n\n", pitch, roll, yaw, pitch2, roll2, yaw2);
      
  //   }
  // }
}



/////////////////////////////////////////////////
int main(int _argc, char **_argv)
{
  // Load gazebo
  gazebo::setupClient(_argc, _argv);

  // Create our node for communication
  gazebo::transport::NodePtr node(new gazebo::transport::Node());
  node->Init();

  // Listen to Gazebo pose topic
  gazebo::transport::SubscriberPtr sub = node->Subscribe("~/lift_drag_demo_model/body/Vilma_IMU/imu", cb);
  //gazebo::transport::PublisherPtr controlPub = node->Advertise<msgs::Cessna>("~/cessna_c172/control");
  gazebo::transport::PublisherPtr controlPub = node->Advertise<msgs::Aircraft>("~/aircraft_control");

  //arduino.Init("/dev/ttyACM0");

  PlaneController plane(node);
  RxDataPacket rxData;

  // Busy wait loop...replace with your own code as needed.
  while (true){
     //std::string buildOutput = sendData.GetString();
     // std::cout << buildOutput << std::endl;
    //arduino.SendData(buildOutput);

    //std::cout << "TEST: " << std::endl;
    if (arduino.DataAvailable()){
      //std::cout << "TEST2: " << std::endl;
      string tempData;
      tempData = "";
      tempData = arduino.GetData();
      rxData.UnPackData(tempData);
      std::cout << "T: " << rxData.getThrottle() << "  A: " << rxData.getAileron() << "  E: " << rxData.getElevator() << "  R: " << rxData.getRudder() << std::endl;
    }

    plane.SetThrottle(rxData.getThrottle()); //0 to 1000
    plane.SetAileron(0.3);//(rxData.getAileron()); //-0.3 to 0.3
    plane.SetElevator(0.5);//(rxData.getElevator()); //-0.5 to 0.5
    plane.SetRudder(0.3);//(rxData.getRudder()); //-0.3 to 0.3

    gazebo::common::Time::MSleep(10);
  }

  // Make sure to shut everything down.
  gazebo::shutdown();
}
