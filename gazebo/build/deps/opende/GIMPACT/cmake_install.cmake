# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_gimpact.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_gimpact.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_gimpact.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/opende/GIMPACT/libgazebo_gimpact.so.4.0.1"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/opende/GIMPACT/libgazebo_gimpact.so.4"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/opende/GIMPACT/libgazebo_gimpact.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_gimpact.so.4.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_gimpact.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libgazebo_gimpact.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "shlib")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/GIMPACT" TYPE FILE FILES
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_tri_sphere_collision.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_tri_capsule_collision.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gimpact.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_trimesh.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_tri_collision.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_radixsort.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_memory.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_geometry.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_contact.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_boxpruning.h"
    "/home/mehatfie/GitHub/simSPIKE/gazebo/deps/opende/GIMPACT/include/GIMPACT/gim_math.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

