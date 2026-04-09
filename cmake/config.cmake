# Use pre-defined installation directory variables.
include(GNUInstallDirs)

# Configure CMAKE_INSTALL_PREFIX for a local install.
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/install)

# # Set the build type to Debug by default if not specified.
# if (NOT CMAKE_BUILD_TYPE)
#     set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
# endif() 

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Configuring for Debug build.")
elseif (CMAKE_BUILD_TYPE STREQUAL "Release")
    message(STATUS "Configuring for Release build.")
else()
    message(WARNING "Unknown CMAKE_BUILD_TYPE. Defaulting to Debug.")
    set(CMAKE_BUILD_TYPE "Debug")
endif()

