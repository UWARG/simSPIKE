# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_rendering.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_rendering.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_rendering.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/libgazebo_rendering.so.4.0.1"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/libgazebo_rendering.so.4"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/libgazebo_rendering.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_rendering.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_rendering.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_rendering.so"
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/rendering" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/ArrowVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/AxisVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Camera.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/CameraVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/COMVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/ContactVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Conversions.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/DepthCamera.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/DynamicLines.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/DynamicRenderable.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/FPSViewController.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/GpuLaser.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Grid.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/GUIOverlay.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Heightmap.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/JointVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/LaserVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/SonarVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Light.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Material.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/MovableText.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/OrbitViewController.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Projector.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RayQuery.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RenderEngine.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RenderEvents.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RenderingIface.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RenderTypes.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Road2d.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RFIDVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RFIDTagVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/RTShaderSystem.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Scene.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/SelectionObj.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/TransmitterVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/UserCamera.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/VideoVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/ViewController.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/Visual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/WireBox.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/WindowManager.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/WrenchVisual.hh"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/ogre_gazebo.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/rendering/cegui.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/rendering.hh"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/deferred_shading/cmake_install.cmake")
  INCLUDE("/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/skyx/cmake_install.cmake")
  INCLUDE("/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/selection_buffer/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

