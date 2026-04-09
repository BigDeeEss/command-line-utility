# CMakeLists.txt for CommandLineUtility project
cmake_minimum_required(VERSION 3.19)
project(CommandLineUtility)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include CMake modules
include(cmake/config.cmake)
include(cmake/dependencies.cmake)
include(cmake/flags.cmake)

# Add source directory
add_subdirectory(src)

# Add tests if Debug build
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_subdirectory(tst)
endif()