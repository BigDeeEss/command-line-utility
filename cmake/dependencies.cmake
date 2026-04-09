# Add GTest if Debug build
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    find_package(GTest REQUIRED)
endif()