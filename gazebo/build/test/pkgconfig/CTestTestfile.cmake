# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/test/pkgconfig
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/test/pkgconfig
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(REGRESSION_config-pkgconfig "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/pkgconfig/REGRESSION_config-pkgconfig" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/REGRESSION_config-pkgconfig.xml")
SET_TESTS_PROPERTIES(REGRESSION_config-pkgconfig PROPERTIES  TIMEOUT "240")
ADD_TEST(check_REGRESSION_config-pkgconfig "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/REGRESSION_config-pkgconfig.xml")
