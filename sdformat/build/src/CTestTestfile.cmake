# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/sdformat/src
# Build directory: /home/mehatfie/GitHub/simSPIKE/sdformat/build/src
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(UNIT_SDF_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/build/src/UNIT_SDF_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_SDF_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_SDF_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_SDF_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_SDF_TEST.xml")
ADD_TEST(UNIT_Console_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/build/src/UNIT_Console_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_Console_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_Console_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_Console_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_Console_TEST.xml")
ADD_TEST(UNIT_Converter_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/build/src/UNIT_Converter_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_Converter_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_Converter_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_Converter_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_Converter_TEST.xml")
ADD_TEST(UNIT_parser_urdf_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/build/src/UNIT_parser_urdf_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_parser_urdf_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_parser_urdf_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_parser_urdf_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_parser_urdf_TEST.xml")
ADD_TEST(UNIT_Param_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/build/src/UNIT_Param_TEST" "--gtest_output=xml:/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_Param_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_Param_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_Param_TEST "/home/mehatfie/GitHub/simSPIKE/sdformat/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/sdformat/build/test_results/UNIT_Param_TEST.xml")
