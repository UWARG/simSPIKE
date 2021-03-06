set(CPACK_PACKAGE_NAME "SDFormat")
set(CPACK_PACKAGE_VENDOR "sdformat.org")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Scene Description Format (SDF)")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "sdformat")
set(CPACK_RESOURCE_FILE_LICENSE "/home/mehatfie/GitHub/simSPIKE/sdformat/LICENSE")
set(CPACK_RESOURCE_FILE_README "/home/mehatfie/GitHub/simSPIKE/sdformat/README")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/home/mehatfie/GitHub/simSPIKE/sdformat/README")
set(CPACK_PACKAGE_MAINTAINER "Nate Koenig <nate@osrfoundation.org>")
set(CPACK_PACKAGE_CONTACT "Nate Koenig <nate@osrfoundation.org>")

set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libboost-all-dev, libtinyxml-dev")
set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "Format and parser for scene description files.")

set(CPACK_RPM_PACKAGE_ARCHITECTURE "")
set(CPACK_RPM_PACKAGE_REQUIRES "libboost-all-dev, libtinyxml-dev")
set(CPACK_RPM_PACKAGE_DESCRIPTION "Format and parser for scene description files.")

set (CPACK_PACKAGE_FILE_NAME "sdformat-2.2.2")
set (CPACK_SOURCE_PACKAGE_FILE_NAME "sdformat-2.2.2")
