# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/test/examples
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/test/examples
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(EXAMPLE_example_plugins "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/examples/EXAMPLE_example_plugins" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/EXAMPLE_example_plugins.xml")
SET_TESTS_PROPERTIES(EXAMPLE_example_plugins PROPERTIES  TIMEOUT "240")
ADD_TEST(check_EXAMPLE_example_plugins "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/EXAMPLE_example_plugins.xml")
