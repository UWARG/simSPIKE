# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/util
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/util
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(UNIT_Diagnostics_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/util/UNIT_Diagnostics_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_Diagnostics_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_Diagnostics_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_Diagnostics_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_Diagnostics_TEST.xml")
ADD_TEST(UNIT_LogRecord_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/util/UNIT_LogRecord_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_LogRecord_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_LogRecord_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_LogRecord_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_LogRecord_TEST.xml")
ADD_TEST(UNIT_OpenAL_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/util/UNIT_OpenAL_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_OpenAL_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_OpenAL_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_OpenAL_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_OpenAL_TEST.xml")
