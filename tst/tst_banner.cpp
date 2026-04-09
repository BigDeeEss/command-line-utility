/// @file tst_banner.cpp
/// @brief Unit test for banner function in banner.hpp

#include <gtest/gtest.h>

#include "banner.hpp"


/// @brief Test that the banner function returns the expected output
TEST(BannerTest, CorrectOutput) {
    // Call the banner function and check its output
    EXPECT_STREQ(
        banner().str().c_str(), "Welcome to the Command Line Utility!\n");
}