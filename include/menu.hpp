/// @file menu.hpp
/// @brief Declares a Menu class that displays options and gets a valid choice
/// from user

#pragma once

#include <istream>


/// @brief Declares a Menu class that displays options and gets a valid choice
/// from user
class Menu {
  public:
    Menu() = default;

    ~Menu() = default;

    /// @brief Displays menu options to user
    void display() const;

    /// @brief Gets a menu choice from user
    /// @param input Input stream to read user choice from
    /// @return The menu choice
    std::pair<char, bool> getChoice(std::istream& input) const;

    /// @brief Gets a valid menu choice from user
    /// @return The valid menu choice
    char getValidChoice() const;
};
