# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/worlds

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/gazebo-4.0/worlds/actor.world;/usr/local/share/gazebo-4.0/worlds/blank.world;/usr/local/share/gazebo-4.0/worlds/camera.world;/usr/local/share/gazebo-4.0/worlds/cart_demo.world;/usr/local/share/gazebo-4.0/worlds/contact.world;/usr/local/share/gazebo-4.0/worlds/depth_camera.world;/usr/local/share/gazebo-4.0/worlds/empty_1_0.world;/usr/local/share/gazebo-4.0/worlds/empty_bullet.world;/usr/local/share/gazebo-4.0/worlds/empty_sky.world;/usr/local/share/gazebo-4.0/worlds/empty.world;/usr/local/share/gazebo-4.0/worlds/everything.world;/usr/local/share/gazebo-4.0/worlds/force_torque_demo.world;/usr/local/share/gazebo-4.0/worlds/friction_demo.world;/usr/local/share/gazebo-4.0/worlds/gripper.world;/usr/local/share/gazebo-4.0/worlds/heightmap_dem.world;/usr/local/share/gazebo-4.0/worlds/heightmap.world;/usr/local/share/gazebo-4.0/worlds/hydra_demo.world;/usr/local/share/gazebo-4.0/worlds/joint_damping_demo.world;/usr/local/share/gazebo-4.0/worlds/joints.world;/usr/local/share/gazebo-4.0/worlds/lights.world;/usr/local/share/gazebo-4.0/worlds/mud_bitmask.world;/usr/local/share/gazebo-4.0/worlds/mud.world;/usr/local/share/gazebo-4.0/worlds/multilink_shape.world;/usr/local/share/gazebo-4.0/worlds/openal.world;/usr/local/share/gazebo-4.0/worlds/pioneer2dx.world;/usr/local/share/gazebo-4.0/worlds/plane_demo.world;/usr/local/share/gazebo-4.0/worlds/plane_propeller_demo.world;/usr/local/share/gazebo-4.0/worlds/plugin.world;/usr/local/share/gazebo-4.0/worlds/polyline.world;/usr/local/share/gazebo-4.0/worlds/population.world;/usr/local/share/gazebo-4.0/worlds/pr2.world;/usr/local/share/gazebo-4.0/worlds/presentation.world;/usr/local/share/gazebo-4.0/worlds/pressure_sensor.world;/usr/local/share/gazebo-4.0/worlds/projector.world;/usr/local/share/gazebo-4.0/worlds/quad_rotor_demo.world;/usr/local/share/gazebo-4.0/worlds/quad_rotor_demo_2.world;/usr/local/share/gazebo-4.0/worlds/ray_cpu.world;/usr/local/share/gazebo-4.0/worlds/ray_noise_plugin.world;/usr/local/share/gazebo-4.0/worlds/road.world;/usr/local/share/gazebo-4.0/worlds/road_textures.world;/usr/local/share/gazebo-4.0/worlds/robocup09_spl_field.world;/usr/local/share/gazebo-4.0/worlds/robocup14_spl_field.world;/usr/local/share/gazebo-4.0/worlds/robocup_3Dsim.world;/usr/local/share/gazebo-4.0/worlds/rubble.world;/usr/local/share/gazebo-4.0/worlds/shapes.world;/usr/local/share/gazebo-4.0/worlds/simple_arm.world;/usr/local/share/gazebo-4.0/worlds/simple_gripper.world;/usr/local/share/gazebo-4.0/worlds/single_rotor_demo.world;/usr/local/share/gazebo-4.0/worlds/sonar_demo.world;/usr/local/share/gazebo-4.0/worlds/sphere_atlas_demo.world;/usr/local/share/gazebo-4.0/worlds/stacks.world;/usr/local/share/gazebo-4.0/worlds/trigger.world;/usr/local/share/gazebo-4.0/worlds/twin_rotor_demo.world;/usr/local/share/gazebo-4.0/worlds/willowgarage.world;/usr/local/share/gazebo-4.0/worlds/wireless_sensors.world")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/worlds" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/actor.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/blank.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/camera.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/cart_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/contact.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/depth_camera.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/empty_1_0.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/empty_bullet.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/empty_sky.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/empty.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/everything.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/force_torque_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/friction_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/gripper.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/heightmap_dem.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/heightmap.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/hydra_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/joint_damping_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/joints.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/lights.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/mud_bitmask.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/mud.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/multilink_shape.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/openal.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/pioneer2dx.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/plane_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/plane_propeller_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/plugin.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/polyline.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/population.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/pr2.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/presentation.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/pressure_sensor.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/projector.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/quad_rotor_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/quad_rotor_demo_2.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/ray_cpu.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/ray_noise_plugin.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/road.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/road_textures.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/robocup09_spl_field.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/robocup14_spl_field.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/robocup_3Dsim.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/rubble.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/shapes.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/simple_arm.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/simple_gripper.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/single_rotor_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/sonar_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/sphere_atlas_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/stacks.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/trigger.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/twin_rotor_demo.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/willowgarage.world"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/worlds/wireless_sensors.world"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

