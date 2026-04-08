cmake_minimum_required(VERSION 3.10)
project(CommandLineUtility)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/config.cmake)

add_subdirectory(src)