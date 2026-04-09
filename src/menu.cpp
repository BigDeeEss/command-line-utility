/// @file menu.cpp
/// @brief Implements a menu function: displays a menu and gets choice from user

#include <iostream>

#include <menu.hpp>

/// @brief Displays a menu and gets choice from user
/// @param input Input stream to read user choice from
/// @return Choice as entered by user
char menu(std::istream &input)
{
    char choice{0};

    bool validChoice{false};
    while (!validChoice)
    {
        std::cout << "Menu:\n";
        std::cout << "1. Option 1\n";
        std::cout << "2. Option 2\n";
        std::cout << "3. Option 3\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        input >> choice;
        if (choice >= '1' && choice <= '4')
        {
            validChoice = true;
        }
        else
        {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    std::cout << "You chose option " << choice << ".\n";

    return choice;
}

void Menu::display() const
{
    std::cout << "Menu:\n";
    std::cout << "1. Option 1\n";
    std::cout << "2. Option 2\n";
    std::cout << "3. Option 3\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

std::pair<char, bool> Menu::getChoice(std::istream &input) const
{
    char choice{0};

    input >> choice;
    if (choice >= '1' && choice <= '4')
    {
        return std::pair(choice, true);
    }
    else
    {
        return std::pair(choice, false);
    }
}

char Menu::getValidChoice() const
{
    bool validChoice{false};
    while (!validChoice)
    {
        display();
        auto [choice, isValid] = getChoice(std::cin);
        if (isValid)
        {
            return choice;
        }
        else
        {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}