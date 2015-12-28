# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs

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
   "/usr/local/share/gazebo-4.0/media/materials/programs/camera_noise_gaussian_fs.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/camera_noise_gaussian_vs.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/grid_fp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/grid_vp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/shadow_caster_fp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/shadow_caster_vp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/spot_shadow_receiver_fp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/spot_shadow_receiver_vp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/directional_shadow_receiver_fp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/directional_shadow_receiver_vp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/point_receiver_vp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/point_receiver_fp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/ambient_one_texture_vp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/blur.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/perpixel_vp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/perpixel_fp.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/depth_map.frag;/usr/local/share/gazebo-4.0/media/materials/programs/depth_map.vert;/usr/local/share/gazebo-4.0/media/materials/programs/depth_points_map.frag;/usr/local/share/gazebo-4.0/media/materials/programs/depth_points_map.vert;/usr/local/share/gazebo-4.0/media/materials/programs/laser_1st_pass.frag;/usr/local/share/gazebo-4.0/media/materials/programs/laser_1st_pass_dbg.frag;/usr/local/share/gazebo-4.0/media/materials/programs/laser_1st_pass.vert;/usr/local/share/gazebo-4.0/media/materials/programs/laser_2nd_pass.frag;/usr/local/share/gazebo-4.0/media/materials/programs/laser_2nd_pass.vert;/usr/local/share/gazebo-4.0/media/materials/programs/plain_color_vs.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/plain_color_fs.glsl;/usr/local/share/gazebo-4.0/media/materials/programs/warp.vert;/usr/local/share/gazebo-4.0/media/materials/programs/warpWithChromeAb.frag")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/media/materials/programs" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/camera_noise_gaussian_fs.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/camera_noise_gaussian_vs.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/grid_fp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/grid_vp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/shadow_caster_fp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/shadow_caster_vp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/spot_shadow_receiver_fp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/spot_shadow_receiver_vp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/directional_shadow_receiver_fp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/directional_shadow_receiver_vp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/point_receiver_vp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/point_receiver_fp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/ambient_one_texture_vp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/blur.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/perpixel_vp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/perpixel_fp.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/depth_map.frag"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/depth_map.vert"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/depth_points_map.frag"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/depth_points_map.vert"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/laser_1st_pass.frag"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/laser_1st_pass_dbg.frag"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/laser_1st_pass.vert"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/laser_2nd_pass.frag"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/laser_2nd_pass.vert"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/plain_color_vs.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/plain_color_fs.glsl"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/warp.vert"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/programs/warpWithChromeAb.frag"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/mehatfie/GitHub/simSPIKE/gazebo/build/media/materials/programs/deferred_rendering/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

