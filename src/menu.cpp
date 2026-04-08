/// @file menu.cpp
/// @brief Implements a menu function: displays a menu and gets choice from user

#include <iostream>

#include <menu.hpp>

/// @brief Displays a menu and gets choice from user
/// @return Choice as entered by user
char menu()
{
    char choice{};

    std::cout << "Menu:\n";
    std::cout << "1. Option 1\n";
    std::cout << "2. Option 2\n";
    std::cout << "3. Option 3\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::cout << "You chose option " << choice << ".\n";

    return 0;
}