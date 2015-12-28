/*
 * Copyright (C) 2015 Open Source Robotics Foundation
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
#ifndef _GAZEBO_GUI_CESSNA_PLUGIN_HH_
#define _GAZEBO_GUI_CESSNA_PLUGIN_HH_

#include <algorithm>
#include <mutex>
#include <gazebo/common/Plugin.hh>
#include <gazebo/transport/transport.hh>
#include <cmath>


namespace gazebo
{
  /// \brief A GUI plugin that controls the Cessna model using the keyboard.
  /// If you are reading this, feel free to improve this plugin by adding
  /// graphical widgets to make the demo more interesting and fun.
  ///
  /// Keyboard controls:
  /// w         Increase thrust (+10 %)
  /// s         Decrease thrust (-10 %)
  /// d         Increase rudder angle (+1 degree)
  /// a         Decrease rudder angle (-1 degree)
  /// Left-Key  Left roll (+1 degree)
  /// Right-Key Right roll (+1 degree)
  /// Up-Key    Pitch down (+1 degree)
  /// Down-Key  Pitch up (+1 degree)
  /// 1         Preset for take-off
  /// 2         Preset for cruise
  /// 3         Preset for landing
  class PlaneController
  {
    /// \brief Constructor.
    public: 
      PlaneController();

    /// \brief Destructor.
    public: virtual ~PlaneController();

    /// \brief Callback that receives a control message from
    /// the ~/cessna_c172/state topic.
    /// \param[in] _msg State msg.
    private: void OnState(ConstCessnaPtr &_msg);

    public: void SetThrust(float input);

    public: void SetAileron(float input);

    public: void SetElevator(float input);

    public: void SetRudder(float input);


    /// \brief SDF for this plugin.
    private: sdf::ElementPtr sdf;

    /// \brief Pointer to a node for communication.
    private: transport::NodePtr gzNode;

    /// \brief Control publisher.
    private: transport::PublisherPtr controlPub;

    /// \brief State subscriber.
    private: transport::SubscriberPtr stateSub;

    /// \brief Angle increment/decrement each time a key is pressed;
    private: math::Angle angleStep;

    /// \brief State received from the Cessna plugin.
    private: msgs::Cessna state;

    /// \brief Protection.
    private: std::mutex mutex;
  };


  /////////////////////////////////////////////////
  PlaneController::PlaneController()
  {
    // Set the increment or decrement in angle per key pressed.
    this->angleStep.SetFromDegree(1.0);

    // Initialize transport.
    this->gzNode = transport::NodePtr(new transport::Node());
    this->gzNode->Init();
    this->controlPub = this->gzNode->Advertise<msgs::Cessna>("/gazebo/default/cessna_c172/control");
    this->stateSub = this->gzNode->Subscribe<msgs::Cessna>("/gazebo/default/cessna_c172/state", &PlaneController::OnState, this);
  }

  /////////////////////////////////////////////////
  PlaneController::~PlaneController()
  {
  }

  ////////////////////////////////////////////////
  void PlaneController::OnState(ConstCessnaPtr &_msg)
  {
    std::lock_guard<std::mutex> lock(this->mutex);

    // Refresh the state.
    this->state = *_msg;
  }

  /////////////////////////////////////////////////
  //input has to be between 0 and 1
  void PlaneController::SetThrust(float input)
  {
    // std::lock_guard<std::mutex> lock(this->mutex);

    // msgs::Cessna msg;
    // input = std::min(input + 0.1f, 1.0f); //error checking if input is between 0 and 1
    // msg.set_cmd_propeller_speed(input);
    // this->controlPub->Publish(msg);
    std::cout << "TEST1" << std::endl;
    float thrust;
    // {
    //   std::lock_guard<std::mutex> lock(this->mutex);
      thrust = this->state.cmd_propeller_speed();// + 0.3f;
    // }
    std::cout << thrust << std::endl;
    msgs::Cessna msg;
    thrust = std::min(thrust + 0.1f, 1.0f); //have to change this to better error checking... this won't work
    msg.set_cmd_propeller_speed(thrust);
    //std::cout << msg.cmd_propeller_speed() << std::endl;
    this->controlPub->Publish(msg);
  }

  /////////////////////////////////////////////////
  //input has to be between 0 and 1
  void PlaneController::SetAileron(float input)
  {
    math::Angle aileron;
    {
      std::lock_guard<std::mutex> lock(this->mutex);
      aileron.SetFromDegree(input);
    }
    msgs::Cessna msg;
    if (std::abs(aileron.Degree()) <= 30) //error checking if input is no greater than 30deg
    {
      msg.set_cmd_left_aileron(aileron.Radian());
      msg.set_cmd_right_aileron(-aileron.Radian());
      this->controlPub->Publish(msg);
    }
  }
}

#endif
