if (GAZEBO_CONFIG_INCLUDED)
  return()
endif()
set(GAZEBO_CONFIG_INCLUDED TRUE)

list(APPEND GAZEBO_INCLUDE_DIRS /usr/local/include)
list(APPEND GAZEBO_INCLUDE_DIRS /usr/local/include/gazebo-4.0)

list(APPEND GAZEBO_LIBRARY_DIRS /usr/local/lib/x86_64-linux-gnu)
list(APPEND GAZEBO_LIBRARY_DIRS /usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins)

list(APPEND GAZEBO_CFLAGS -I/usr/local/include)
list(APPEND GAZEBO_CFLAGS -I/usr/local/include/gazebo-4.0)

foreach(lib gazebo;gazebo_common;gazebo_gimpact;gazebo_gui;gazebo_gui_building;gazebo_gui_viewers;gazebo_math;gazebo_msgs;gazebo_ode;gazebo_opcode;gazebo_opende_ou;gazebo_physics;gazebo_physics_ode;gazebo_rendering;gazebo_selection_buffer;gazebo_sensors;gazebo_skyx;gazebo_transport;gazebo_util;gazebo_ccd;gazebo_player;gazebo_rendering_deferred)
  set(onelib "${lib}-NOTFOUND")
  find_library(onelib ${lib}
    PATHS /usr/local/lib/x86_64-linux-gnu
    NO_DEFAULT_PATH
    )
  if(NOT onelib)
    message(FATAL_ERROR "Library '${lib}' in package GAZEBO is not installed properly")
  endif()
  list(APPEND GAZEBO_LIBRARIES ${onelib})
endforeach()

foreach(dep Boost;Protobuf;SDFormat)
  if(NOT ${dep}_FOUND)
    find_package(${dep} REQUIRED)
  endif()
  list(APPEND GAZEBO_INCLUDE_DIRS ${${dep}_INCLUDE_DIRS})

  # Protobuf needs to be capitalized to match PROTOBUF_LIBRARIES
  if (${dep} STREQUAL "Protobuf")
    string (TOUPPER ${dep} dep_lib)
  else()
    set (dep_lib ${dep})
  endif()
    
  list(APPEND GAZEBO_LIBRARIES ${${dep_lib}_LIBRARIES})
endforeach()

list(APPEND GAZEBO_LDFLAGS -Wl,-rpath,/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins)
list(APPEND GAZEBO_LDFLAGS -L/usr/local/lib/x86_64-linux-gnu)
list(APPEND GAZEBO_LDFLAGS -L/usr/local/lib/x86_64-linux-gnu/gazebo-4.0/plugins)
