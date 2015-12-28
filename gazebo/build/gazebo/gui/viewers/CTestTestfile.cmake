# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/gui/viewers
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/viewers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(UNIT_ImagesView_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/viewers/UNIT_ImagesView_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ImagesView_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_ImagesView_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_ImagesView_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ImagesView_TEST.xml")
