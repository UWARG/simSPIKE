# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures

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
   "/usr/local/share/gazebo-4.0/media/materials/textures/beigeWall.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/ceiling_tiled.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/clouds.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/dirt_diffusespecular.png;/usr/local/share/gazebo-4.0/media/materials/textures/dirt_normal.png;/usr/local/share/gazebo-4.0/media/materials/textures/flat_normal.png;/usr/local/share/gazebo-4.0/media/materials/textures/fungus_diffusespecular.png;/usr/local/share/gazebo-4.0/media/materials/textures/fungus_normal.png;/usr/local/share/gazebo-4.0/media/materials/textures/granite2.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/granite.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/grass_diffusespecular.png;/usr/local/share/gazebo-4.0/media/materials/textures/grass.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/grass_normal.png;/usr/local/share/gazebo-4.0/media/materials/textures/hardwood_floor.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/heightmap_bowl.png;/usr/local/share/gazebo-4.0/media/materials/textures/motorway.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/paintedWall.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/pioneerBody.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/primary.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/projection_filter.png;/usr/local/share/gazebo-4.0/media/materials/textures/random.png;/usr/local/share/gazebo-4.0/media/materials/textures/residential.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/road1.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/secondary.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/sidewalk.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/steps.jpeg;/usr/local/share/gazebo-4.0/media/materials/textures/stereo_projection_pattern_high_res.png;/usr/local/share/gazebo-4.0/media/materials/textures/stereo_projection_pattern_high_res_red.png;/usr/local/share/gazebo-4.0/media/materials/textures/terrain_detail.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/terrain.png;/usr/local/share/gazebo-4.0/media/materials/textures/trunk.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/white.bmp;/usr/local/share/gazebo-4.0/media/materials/textures/willowMap.png;/usr/local/share/gazebo-4.0/media/materials/textures/wood.jpg;/usr/local/share/gazebo-4.0/media/materials/textures/WoodPallet.png")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/share/gazebo-4.0/media/materials/textures" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/beigeWall.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/ceiling_tiled.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/clouds.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/dirt_diffusespecular.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/dirt_normal.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/flat_normal.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/fungus_diffusespecular.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/fungus_normal.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/granite2.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/granite.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/grass_diffusespecular.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/grass.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/grass_normal.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/hardwood_floor.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/heightmap_bowl.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/motorway.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/paintedWall.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/pioneerBody.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/primary.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/projection_filter.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/random.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/residential.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/road1.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/secondary.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/sidewalk.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/steps.jpeg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/stereo_projection_pattern_high_res.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/stereo_projection_pattern_high_res_red.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/terrain_detail.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/terrain.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/trunk.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/white.bmp"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/willowMap.png"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/wood.jpg"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/media/materials/textures/WoodPallet.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

