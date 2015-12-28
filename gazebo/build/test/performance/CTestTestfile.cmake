# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/test/performance
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(PERFORMANCE_RAMLibrary_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance/PERFORMANCE_RAMLibrary_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_RAMLibrary_TEST.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_RAMLibrary_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_RAMLibrary_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_RAMLibrary_TEST.xml")
ADD_TEST(PERFORMANCE_factory_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance/PERFORMANCE_factory_stress" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_factory_stress.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_factory_stress PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_factory_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_factory_stress.xml")
ADD_TEST(PERFORMANCE_gz_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance/PERFORMANCE_gz_stress" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_gz_stress.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_gz_stress PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_gz_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_gz_stress.xml")
ADD_TEST(PERFORMANCE_image_convert_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance/PERFORMANCE_image_convert_stress" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_image_convert_stress.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_image_convert_stress PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_image_convert_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_image_convert_stress.xml")
ADD_TEST(PERFORMANCE_sensor_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance/PERFORMANCE_sensor_stress" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_sensor_stress.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_sensor_stress PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_sensor_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_sensor_stress.xml")
ADD_TEST(PERFORMANCE_set_world_pose "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance/PERFORMANCE_set_world_pose" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_set_world_pose.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_set_world_pose PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_set_world_pose "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_set_world_pose.xml")
ADD_TEST(PERFORMANCE_transport_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test/performance/PERFORMANCE_transport_stress" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_transport_stress.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_transport_stress PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_transport_stress "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/PERFORMANCE_transport_stress.xml")
