# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx

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
   "/usr/local/share/gazebo-4.0/media/skyx/CloudsNormal.png;/usr/local/share/gazebo-4.0/media/skyx/Clouds.png;/usr/local/share/gazebo-4.0/media/skyx/CloudsTile.png;/usr/local/share/gazebo-4.0/media/skyx/CMakeLists.txt;/usr/local/share/gazebo-4.0/media/skyx/Noise.jpg;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Clouds.fragment;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Clouds.hlsl;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Clouds.vertex;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Ground.fragment;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Ground.hlsl;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Ground.vertex;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Lightning.fragment;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Lightning.hlsl;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Lightning.vertex;/usr/local/share/gazebo-4.0/media/skyx/SkyX.material;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Moon.fragment;/usr/local/share/gazebo-4.0/media/skyx/SkyX_MoonHalo.png;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Moon.hlsl;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Moon.png;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Moon.vertex;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Skydome.fragment;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Skydome.hlsl;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Skydome.vertex;/usr/local/share/gazebo-4.0/media/skyx/SkyX_Starfield.png;/usr/local/share/gazebo-4.0/media/skyx/SkyX_VolClouds.fragment;/usr/local/share/gazebo-4.0/media/skyx/SkyX_VolClouds.hlsl;/usr/local/share/gazebo-4.0/media/skyx/SkyX_VolClouds_Lightning.fragment;/usr/local/share/gazebo-4.0/media/skyx/SkyX_VolClouds_Lightning.hlsl;/usr/local/share/gazebo-4.0/media/skyx/SkyX_VolClouds_Lightning.vertex;/usr/local/share/gazebo-4.0/media/skyx/SkyX_VolClouds.vertex")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/media/skyx" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/CloudsNormal.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/Clouds.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/CloudsTile.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/CMakeLists.txt"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/Noise.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Clouds.fragment"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Clouds.hlsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Clouds.vertex"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Ground.fragment"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Ground.hlsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Ground.vertex"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Lightning.fragment"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Lightning.hlsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Lightning.vertex"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Moon.fragment"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_MoonHalo.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Moon.hlsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Moon.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Moon.vertex"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Skydome.fragment"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Skydome.hlsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Skydome.vertex"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_Starfield.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_VolClouds.fragment"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_VolClouds.hlsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_VolClouds_Lightning.fragment"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_VolClouds_Lightning.hlsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_VolClouds_Lightning.vertex"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/skyx/SkyX_VolClouds.vertex"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

