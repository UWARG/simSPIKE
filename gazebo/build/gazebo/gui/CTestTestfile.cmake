# CMake generated Testfile for 
# Source directory: /home/mehatfie/GitHub/simSPIKE/gazebo/gazebo/gui
# Build directory: /home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(UNIT_DataLogger_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/UNIT_DataLogger_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_DataLogger_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_DataLogger_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_DataLogger_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_DataLogger_TEST.xml")
ADD_TEST(UNIT_GuiIface_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/UNIT_GuiIface_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_GuiIface_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_GuiIface_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_GuiIface_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_GuiIface_TEST.xml")
ADD_TEST(UNIT_ModelAlign_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/UNIT_ModelAlign_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ModelAlign_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_ModelAlign_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_ModelAlign_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ModelAlign_TEST.xml")
ADD_TEST(UNIT_TimePanel_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/UNIT_TimePanel_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_TimePanel_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_TimePanel_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_TimePanel_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_TimePanel_TEST.xml")
ADD_TEST(UNIT_MainWindow_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/UNIT_MainWindow_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_MainWindow_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_MainWindow_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_MainWindow_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_MainWindow_TEST.xml")
ADD_TEST(UNIT_ModelListWidget_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/UNIT_ModelListWidget_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ModelListWidget_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_ModelListWidget_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_ModelListWidget_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ModelListWidget_TEST.xml")
ADD_TEST(UNIT_ModelSnap_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/build/gazebo/gui/UNIT_ModelSnap_TEST" "-xml" "-o" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ModelSnap_TEST.xml")
SET_TESTS_PROPERTIES(UNIT_ModelSnap_TEST PROPERTIES  TIMEOUT "240")
ADD_TEST(check_UNIT_ModelSnap_TEST "/home/mehatfie/GitHub/simSPIKE/gazebo/tools/check_test_ran.py" "/home/mehatfie/GitHub/simSPIKE/gazebo/build/test_results/UNIT_ModelSnap_TEST.xml")
SUBDIRS(qtpropertybrowser)
SUBDIRS(building)
SUBDIRS(model)
SUBDIRS(terrain)
SUBDIRS(viewers)
