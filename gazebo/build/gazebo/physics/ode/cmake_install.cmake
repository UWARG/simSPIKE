# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_ode.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_ode.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_ode.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/ode/libgazebo_physics_ode.so.4.0.1"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/ode/libgazebo_physics_ode.so.4"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/ode/libgazebo_physics_ode.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_ode.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_ode.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_ode.so"
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/physics/ode" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ode_inc.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEBallJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEBoxShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODECollision.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODECylinderShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEGearboxJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEHeightmapShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEHinge2Joint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEHingeJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODELink.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEMesh.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEMeshShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEMultiRayShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEPhysics.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEPlaneShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEPolylineShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODERayShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEScrewJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODESliderJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODESphereShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODESurfaceParams.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODETypes.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode/ODEUniversalJoint.hh"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

