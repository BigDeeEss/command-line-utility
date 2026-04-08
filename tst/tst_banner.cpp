#include <gtest/gtest.h>

#include <banner.hpp>

TEST(BannerTest, CorrectOutput)
{
    EXPECT_STREQ(banner().str().c_str(), "Welcome to the Command Line Utility!\n");

    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}