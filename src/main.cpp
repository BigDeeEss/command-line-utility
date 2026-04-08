/// @file main.cpp
/// @brief Main entry point for the CommandLineUtility program

#include <menu.hpp>
#include <banner.hpp>

/// @brief Main entry point for the CommandLineUtility program
/// @return Error code (0 for success)
int main()
{
    banner();
    char choice{menu()};



    return 0;
}