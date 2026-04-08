/// @file main.cpp
/// @brief Main entry point for the CommandLineUtility program

#include <iostream>

#include <menu.hpp>
#include <banner.hpp>

/// @brief Main entry point for the CommandLineUtility program
/// @return Error code (0 for success)
int main()
{
    // Print welcome message
    std::cout << banner().str();

    // Print menu and get user choice
    char choice{menu()};

    std::cout << choice << " was selected.\n";

    return 0;
}