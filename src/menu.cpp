/// @file menu.cpp
/// @brief Implements a Menu class that displays options and gets a valid choice
/// from user

#include <iostream>

#include "menu.hpp"


/// @brief Displays menu options to user
void Menu::display() const {
    std::cout << "Menu:\n";
    std::cout << "1. Option 1\n";
    std::cout << "2. Option 2\n";
    std::cout << "3. Option 3\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}




/// @brief Gets a menu choice from user
/// @param input Input stream to read user choice from
/// @return The menu choice
std::pair<char, bool> Menu::getChoice(std::istream& input) const {
    char choice{0};

    // Read user input
    input >> choice;

    // Validate user input, returning choice and either true or false
    if (choice >= '1' && choice <= '4') {
        return std::pair(choice, true);
    } else {
        return std::pair(choice, false);
    }
}




/// @brief Gets a valid menu choice from user
/// @return The valid menu choice
char Menu::getValidChoice() const {
    // Loop until a valid choice is made
    while (true) {
        // Display menu
        display();

        // Get user choice and whether it is valid
        auto [choice, validChoice] = getChoice(std::cin);

        // If valid, return choice, otherwise print error and loop again
        if (validChoice) {
            return choice;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}