# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_common.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_common.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_common.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/common/libgazebo_common.so.4.0.1"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/common/libgazebo_common.so.4"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/common/libgazebo_common.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_common.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_common.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_common.so"
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/common" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Animation.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Assert.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/AudioDecoder.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Base64.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/BVHLoader.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/ColladaLoader.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/CommonIface.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/CommonTypes.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Color.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Console.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Dem.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Event.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Events.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Exception.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/MovingWindowFilter.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/HeightmapData.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Image.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/ImageHeightmap.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/KeyEvent.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/KeyFrame.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Material.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Mesh.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/MeshLoader.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/MeshManager.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/ModelDatabase.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/MouseEvent.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/PID.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Plugin.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/SkeletonAnimation.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Skeleton.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/SingletonT.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/SphericalCoordinates.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/STLLoader.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/SystemPaths.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Time.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Timer.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/UpdateInfo.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/Video.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/ffmpeg_inc.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/GTSMeshUtils.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/common/MeshCSG.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/common/common.hh"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

