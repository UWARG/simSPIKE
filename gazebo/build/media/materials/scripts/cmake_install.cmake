# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts

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
   "/usr/local/share/gazebo-4.0/media/materials/scripts/blur.compositor;/usr/local/share/gazebo-4.0/media/materials/scripts/blur.material;/usr/local/share/gazebo-4.0/media/materials/scripts/CMakeLists.txt;/usr/local/share/gazebo-4.0/media/materials/scripts/deferred.compositor;/usr/local/share/gazebo-4.0/media/materials/scripts/deferred_post.material;/usr/local/share/gazebo-4.0/media/materials/scripts/deferred_post_minilight.material;/usr/local/share/gazebo-4.0/media/materials/scripts/deferred_post.program;/usr/local/share/gazebo-4.0/media/materials/scripts/gazebo.material;/usr/local/share/gazebo-4.0/media/materials/scripts/grid.material;/usr/local/share/gazebo-4.0/media/materials/scripts/kitchen.material;/usr/local/share/gazebo-4.0/media/materials/scripts/noise.compositor;/usr/local/share/gazebo-4.0/media/materials/scripts/glsl120.program;/usr/local/share/gazebo-4.0/media/materials/scripts/oculus.compositor;/usr/local/share/gazebo-4.0/media/materials/scripts/perpixel.program;/usr/local/share/gazebo-4.0/media/materials/scripts/picker.material;/usr/local/share/gazebo-4.0/media/materials/scripts/ShadowCaster.material;/usr/local/share/gazebo-4.0/media/materials/scripts/ShadowCaster.program;/usr/local/share/gazebo-4.0/media/materials/scripts/ssao.compositor;/usr/local/share/gazebo-4.0/media/materials/scripts/ssao.material;/usr/local/share/gazebo-4.0/media/materials/scripts/VPL.material;/usr/local/share/gazebo-4.0/media/materials/scripts/VPL.program;/usr/local/share/gazebo-4.0/media/materials/scripts/shadow_caster.program;/usr/local/share/gazebo-4.0/media/materials/scripts/warp.material")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/media/materials/scripts" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/blur.compositor"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/blur.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/CMakeLists.txt"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/deferred.compositor"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/deferred_post.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/deferred_post_minilight.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/deferred_post.program"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/gazebo.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/grid.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/kitchen.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/noise.compositor"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/glsl120.program"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/oculus.compositor"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/perpixel.program"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/picker.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/ShadowCaster.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/ShadowCaster.program"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/ssao.compositor"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/ssao.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/VPL.material"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/VPL.program"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/shadow_caster.program"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/scripts/warp.material"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

