# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes

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
   "/usr/local/share/gazebo-4.0/media/gui/schemes/Animation.xsd;/usr/local/share/gazebo-4.0/media/gui/schemes/CEGUIConfig.xsd;/usr/local/share/gazebo-4.0/media/gui/schemes/GUILayout.xsd;/usr/local/share/gazebo-4.0/media/gui/schemes/GUIScheme.xsd;/usr/local/share/gazebo-4.0/media/gui/schemes/Demo8.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/OgreTray.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/TaharezLook.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/TaharezLookWidgetAliases.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/TaharezLookWidgets.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/VanillaSkin.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/WindowsLook.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/WindowsLookWidgets.scheme;/usr/local/share/gazebo-4.0/media/gui/schemes/GazeboSkin.scheme")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/media/gui/schemes" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/Animation.xsd"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/CEGUIConfig.xsd"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/GUILayout.xsd"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/GUIScheme.xsd"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/Demo8.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/OgreTray.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/TaharezLook.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/TaharezLookWidgetAliases.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/TaharezLookWidgets.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/VanillaSkin.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/WindowsLook.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/WindowsLookWidgets.scheme"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/gui/schemes/GazeboSkin.scheme"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

