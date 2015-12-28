# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/sdformat/test/performance
# Build directory: /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/performance
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(PERFORMANCE_parser_urdf "/home/mehatfie/GitHub/simSPIKE/sdformat/build/test/performance/PERFORMANCE_parser_urdf" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/PERFORMANCE_parser_urdf.xml")
SET_TESTS_PROPERTIES(PERFORMANCE_parser_urdf PROPERTIES  TIMEOUT "240")
ADD_TEST(check_PERFORMANCE_parser_urdf "/home/mehatfie/GitHub/simSPIKE/sdformat/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/PERFORMANCE_parser_urdf.xml")
