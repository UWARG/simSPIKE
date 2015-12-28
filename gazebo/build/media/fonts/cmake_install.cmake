# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts

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
   "/usr/local/share/gazebo-4.0/media/fonts/arial.ttf;/usr/local/share/gazebo-4.0/media/fonts/console.ttf;/usr/local/share/gazebo-4.0/media/fonts/font_arial.png;/usr/local/share/gazebo-4.0/media/fonts/font_matisse_itc.png;/usr/local/share/gazebo-4.0/media/fonts/Gazebo.fontdef;/usr/local/share/gazebo-4.0/media/fonts/maiden.ttf;/usr/local/share/gazebo-4.0/media/fonts/sample.fontdef;/usr/local/share/gazebo-4.0/media/fonts/solo5.ttf")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/media/fonts" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/arial.ttf"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/console.ttf"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/font_arial.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/font_matisse_itc.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/Gazebo.fontdef"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/maiden.ttf"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/sample.fontdef"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/fonts/solo5.ttf"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

