# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/physics
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(UNIT_BoxShape_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_BoxShape_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_BoxShape_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_BoxShape_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_BoxShape_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_BoxShape_TEST.xml")
ADD_TEST(UNIT_ContactManager_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_ContactManager_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ContactManager_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_ContactManager_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_ContactManager_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ContactManager_TEST.xml")
ADD_TEST(UNIT_CylinderShape_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_CylinderShape_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_CylinderShape_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_CylinderShape_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_CylinderShape_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_CylinderShape_TEST.xml")
ADD_TEST(UNIT_Inertial_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_Inertial_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_Inertial_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_Inertial_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_Inertial_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_Inertial_TEST.xml")
ADD_TEST(UNIT_JointController_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_JointController_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_JointController_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_JointController_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_JointController_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_JointController_TEST.xml")
ADD_TEST(UNIT_PhysicsEngine_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_PhysicsEngine_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_PhysicsEngine_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_PhysicsEngine_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_PhysicsEngine_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_PhysicsEngine_TEST.xml")
ADD_TEST(UNIT_Road_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_Road_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_Road_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_Road_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_Road_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_Road_TEST.xml")
ADD_TEST(UNIT_SphereShape_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/physics/UNIT_SphereShape_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_SphereShape_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_SphereShape_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_SphereShape_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_SphereShape_TEST.xml")
SUBDIRS(ode)
SUBDIRS(simbody)
