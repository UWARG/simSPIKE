# Install script for directory: /home/mehatfie/GitHub/simSPIKE/gazebo/plugins

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
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so"
         RPATH "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libBreakableJointPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so"
         OLD_RPATH "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/sensors:/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/util:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/ode:/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/opende:/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/opende/GIMPACT:/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/opende/ou:/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/libccd:/home/mehatfie/GitHub/simSPIKE/gazebo/build/deps/opende/OPCODE:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/simbody:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/transport:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/msgs:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/skyx:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/selection_buffer:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/rendering/deferred_shading:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/common:/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/math:"
         NEW_RPATH "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libBreakableJointPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/BreakableJointPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libCameraPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCameraPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/CameraPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libCartDemoPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libCartDemoPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/CartDemoPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libContactPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libContactPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/ContactPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libDepthCameraPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDepthCameraPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/DepthCameraPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libDiffDrivePlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libDiffDrivePlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/DiffDrivePlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libForceTorquePlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libForceTorquePlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/ForceTorquePlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libGpuRayPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libGpuRayPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/GpuRayPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libJointTrajectoryPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libJointTrajectoryPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/JointTrajectoryPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libLiftDragPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libLiftDragPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/LiftDragPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libModelPropShop.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libModelPropShop.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/ModelPropShop.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libMudPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libMudPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/MudPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libPlaneDemoPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPlaneDemoPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/PlaneDemoPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libPressurePlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libPressurePlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/PressurePlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libRayPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRayPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/RayPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libRaySensorNoisePlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRaySensorNoisePlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/RaySensorNoisePlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libRubblePlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libRubblePlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/RubblePlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libSkidSteerDrivePlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSkidSteerDrivePlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/SkidSteerDrivePlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libSonarPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSonarPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/SonarPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libSphereAtlasDemoPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libSphereAtlasDemoPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/SphereAtlasDemoPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libVehiclePlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libVehiclePlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/VehiclePlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libHydraPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/HydraPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so"
         RPATH "")
  ENDIF()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins" TYPE SHARED_LIBRARY FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/libHydraDemoPlugin.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins/libHydraDemoPlugin.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-4.0/gazebo/plugins" TYPE FILE FILES "/home/mehatfie/GitHub/simSPIKE/gazebo/plugins/HydraDemoPlugin.hh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")

