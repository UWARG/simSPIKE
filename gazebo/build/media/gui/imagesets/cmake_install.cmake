# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets

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
   "/usr/local/share/gazebo-4.0/media/gui/imagesets/Imageset.xsd;/usr/local/share/gazebo-4.0/media/gui/imagesets/DriveIcons.imageset;/usr/local/share/gazebo-4.0/media/gui/imagesets/DriveIcons.png;/usr/local/share/gazebo-4.0/media/gui/imagesets/FairChar.imageset;/usr/local/share/gazebo-4.0/media/gui/imagesets/FairChar.tga;/usr/local/share/gazebo-4.0/media/gui/imagesets/GPN-2000-001437.tga;/usr/local/share/gazebo-4.0/media/gui/imagesets/logo.png;/usr/local/share/gazebo-4.0/media/gui/imagesets/OgreTray.imageset;/usr/local/share/gazebo-4.0/media/gui/imagesets/OgreTrayImages.png;/usr/local/share/gazebo-4.0/media/gui/imagesets/ReadMe.txt;/usr/local/share/gazebo-4.0/media/gui/imagesets/TaharezLook.imageset;/usr/local/share/gazebo-4.0/media/gui/imagesets/TaharezLook.tga;/usr/local/share/gazebo-4.0/media/gui/imagesets/Vanilla.imageset;/usr/local/share/gazebo-4.0/media/gui/imagesets/vanilla.tga;/usr/local/share/gazebo-4.0/media/gui/imagesets/WindowsLook.imageset;/usr/local/share/gazebo-4.0/media/gui/imagesets/WindowsLook.tga;/usr/local/share/gazebo-4.0/media/gui/imagesets/gazebo.tga;/usr/local/share/gazebo-4.0/media/gui/imagesets/Gazebo.imageset")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/media/gui/imagesets" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/Imageset.xsd"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/DriveIcons.imageset"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/DriveIcons.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/FairChar.imageset"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/FairChar.tga"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/GPN-2000-001437.tga"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/logo.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/OgreTray.imageset"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/OgreTrayImages.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/ReadMe.txt"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/TaharezLook.imageset"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/TaharezLook.tga"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/Vanilla.imageset"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/vanilla.tga"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/WindowsLook.imageset"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/WindowsLook.tga"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/gazebo.tga"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/imagesets/Gazebo.imageset"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

