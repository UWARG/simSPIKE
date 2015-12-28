# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/test/cmake
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/test/cmake
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(REGRESSION_config-cmake "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/cmake/REGRESSION_config-cmake" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/REGRESSION_config-cmake.xml")
SET_TESTS_PROPERTIES(REGRESSION_config-cmake PROPERTIES  TIMEOUT "240")
ADD_TEST(check_REGRESSION_config-cmake "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/REGRESSION_config-cmake.xml")
