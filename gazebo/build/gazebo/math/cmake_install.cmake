# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_math.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_math.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_math.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/math/libgazebo_math.so.4.0.1"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/math/libgazebo_math.so.4"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/math/libgazebo_math.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_math.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_math.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_math.so"
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/math" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Angle.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Box.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Filter.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Helpers.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Kmeans.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/MathTypes.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Matrix3.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Matrix4.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Plane.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Pose.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Quaternion.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Rand.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/RotationSpline.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Spline.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Vector2d.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Vector2i.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Vector3.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/math/Vector4.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/math/gzmath.hh"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

