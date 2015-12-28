# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "shlib")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/libgazebo_physics.so.4.0.1"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/libgazebo_physics.so.4"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/libgazebo_physics.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_REMOVE
           FILE "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "shlib")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/physics" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Actor.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/BallJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Base.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/BoxShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Collision.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/CollisionState.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Contact.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ContactManager.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/CylinderShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Entity.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/HeightmapShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Hinge2Joint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/HingeJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/GearboxJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Inertial.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Gripper.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Joint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/JointController.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/JointWrench.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/JointState.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Link.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/LinkState.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/MapShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/MeshShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Model.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ModelState.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/MultiRayShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/PhysicsIface.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/PhysicsEngine.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/PhysicsFactory.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/PhysicsTypes.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/PlaneShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/PolylineShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Population.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/RayShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Road.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/Shape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ScrewJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/SliderJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/SphereShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/State.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/SurfaceParams.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/UniversalJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/World.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/WorldState.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/physics.hh"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/ode/cmake_install.cmake")
  INCLUDE("/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/simbody/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

