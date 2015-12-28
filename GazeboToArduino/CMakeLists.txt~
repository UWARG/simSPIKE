cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
find_package(Boost COMPONENTS date_time thread system)

include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_executable(listener listener.cc)
add_executable(ArduinoComms_Send ArduinoComms_Send.cc)
add_executable(ArduinoComms_Receive ArduinoComms_Receive.cc)
target_link_libraries(listener ${GAZEBO_LIBRARIES} pthread)

target_link_libraries(ArduinoComms_Receive serial)
target_link_libraries(listener serial)
target_link_libraries(listener -lboost_system)
