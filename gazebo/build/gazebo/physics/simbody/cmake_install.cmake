# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_simbody.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_simbody.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_simbody.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/simbody/libgazebo_physics_simbody.so.4.0.1"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/simbody/libgazebo_physics_simbody.so.4"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/simbody/libgazebo_physics_simbody.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_simbody.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_simbody.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_physics_simbody.so"
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/physics/simbody" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyBallJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyBoxShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyCollision.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyCylinderShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyHeightmapShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyHinge2Joint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyHingeJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/simbody_inc.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyLink.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyMesh.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyMeshShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyModel.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyMultiRayShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyPhysics.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyPlaneShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyPolylineShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyRayShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyScrewJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodySliderJoint.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodySphereShape.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyTypes.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/simbody/SimbodyUniversalJoint.hh"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

