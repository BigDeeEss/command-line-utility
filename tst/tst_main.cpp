/// @file tst_main.cpp
/// @brief Main entry point for Google Test unit tests

#include <gtest/gtest.h>

/// @brief Main entry point for Google Test unit tests
/// @param argc Argument count
/// @param argv Argument vector
/// @return Error code (0 for success)
int main(int argc, char **argv)
{
    // Initialize Google Test and run all tests
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}