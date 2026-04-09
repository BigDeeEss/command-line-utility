/// @file tst_menu.cpp
/// @brief Unit test for menu function in menu.hpp

#include <sstream>

#include <gtest/gtest.h>

#include "menu.hpp"


/// @brief Test that the menu function returns the expected output
TEST(MenuTest, TestGetChoiceWithCorrectInput) {
    std::stringstream input("2\n");

    auto [choice, valid] = Menu().getChoice(input);

    EXPECT_EQ(valid, true);
    EXPECT_EQ(choice, '2');
}




/// @brief Test that the menu function returns the expected output
TEST(MenuTest, TestGetChoiceWithInCorrectInput) {
    std::stringstream input("h\n");

    auto [choice, valid] = Menu().getChoice(input);

    EXPECT_EQ(valid, false);
    EXPECT_EQ(choice, 'h');
}
