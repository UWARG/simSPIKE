# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/msgs
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(UNIT_msgs_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/msgs/UNIT_msgs_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_msgs_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_msgs_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_msgs_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_msgs_TEST.xml")
ADD_TEST(UNIT_MsgFactory_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/msgs/UNIT_MsgFactory_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_MsgFactory_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_MsgFactory_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_MsgFactory_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_MsgFactory_TEST.xml")
