/*
 * Copyright (C) 2014 Open Source Robotics Foundation
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
#ifndef _GAZEBO_PLANE_DEMO_PLUGIN_HH_
#define _GAZEBO_PLANE_DEMO_PLUGIN_HH_

#include <string>
#include <vector>

#include "gazebo/common/common.hh"
#include "gazebo/physics/physics.hh"
#include "gazebo/transport/TransportTypes.hh"
#include "gazebo/gazebo.hh"
#include "gazebo/common/PID.hh"

namespace gazebo
{
  /// \brief A plugin that simulates lift and drag.
  class PlaneDemoPlugin : public ModelPlugin
  {
    /// \brief Constructor.
    public: PlaneDemoPlugin();

    /// \brief Destructor.
    public: ~PlaneDemoPlugin();

    // Documentation Inherited.
    public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);

    // Documentation Inherited.
    public: virtual void Init();

    /// \brief Callback for World Update events.
    protected: virtual void OnUpdate();

    /// \brief Connection to World Update events.
    protected: event::ConnectionPtr updateConnection;

    /// \brief Pointer to world.
    protected: physics::WorldPtr world;

    /// \brief Pointer to physics engine.
    protected: physics::PhysicsEnginePtr physics;

    /// \brief Pointer to model containing plugin.
    protected: physics::ModelPtr model;

    /// \brief Name of model containing plugin.
    protected: std::string modelName;

    /// \brief SDF for this plugin;
    protected: sdf::ElementPtr sdf;

    /// \brief Joint indexes.
    private: static const unsigned int kLeftAileron  = 0;
    private: static const unsigned int kLeftFlap     = 1;
    private: static const unsigned int kRightAileron = 2;
    private: static const unsigned int kRightFlap    = 3;
    private: static const unsigned int kElevators    = 4;
    private: static const unsigned int kRudder       = 5;
    private: static const unsigned int kPropeller    = 6;

    /// \brief Node used for using Gazebo communications.
    private: transport::NodePtr node;

    /// \brief Publisher pointer.
    private: transport::PublisherPtr statePub;

    /// \brief Next command to be applied to the propeller and control surfaces.
    private: float cmds[7];

    class EngineControl
    {
      public: std::string name;
      public: physics::JointPtr joint;
      public: double maxTorque;
      public: int incKey;
      public: int decKey;
      public: double incVal;
      public: double torque;
    };
    protected: std::vector<EngineControl> engineControls;

    class ThrusterControl
    {
      public: std::string name;
      public: physics::LinkPtr link;
      public: double maxTorque;
      public: int incKey;
      public: int decKey;
      public: math::Vector3 incVal;
      public: math::Vector3 force;
    };
    protected: std::vector<ThrusterControl> thrusterControls;

    class JointControl
    {
      public: std::string name;
      public: physics::JointPtr joint;
      public: double cmd;
      public: double incVal;
      public: int incKey;
      public: int decKey;
      public: common::PID pid;
    };
    protected: std::vector<JointControl> jointControls;
    protected: common::Time lastUpdateTime;
  };
}
#endif
