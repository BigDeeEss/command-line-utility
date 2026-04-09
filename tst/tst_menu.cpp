/// @file tst_menu.cpp
/// @brief Unit test for menu function in menu.hpp

#include <sstream>

#include <gtest/gtest.h>

#include <menu.hpp>

/// @brief Test that the menu function returns the expected output     
TEST(MenuTest, CorrectOutput)
{
    std::stringstream input("2\n");

    EXPECT_EQ(menu(input), '2');
}

/// @brief Test that the menu function returns the expected output     
TEST(MenuTest, IncorrectOutput)
{
    std::stringstream input("6\n");

    EXPECT_EQ(menu(input), '2');
}