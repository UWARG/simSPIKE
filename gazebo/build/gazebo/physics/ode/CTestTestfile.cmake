# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics/ode
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/ode
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(UNIT_ODEPhysics_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/ode/UNIT_ODEPhysics_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ODEPhysics_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_ODEPhysics_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_ODEPhysics_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ODEPhysics_TEST.xml")
