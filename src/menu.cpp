#include <iostream>

#include <menu.hpp>

char menu()
{
    int choice{};

    std::cout << "Menu:\n";
    std::cout << "1. Option 1\n";
    std::cout << "2. Option 2\n";
    std::cout << "3. Option 3\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    return choice;
}