/// @file main.cpp
/// @brief Main entry point for the CommandLineUtility program

#include <iostream>

#include "banner.hpp"
#include "bmi_calculator/bmi_calculator2.hpp"
#include "menu.hpp"


/// @brief Main entry point for the CommandLineUtility program
/// @return Error code (0 for success)
int main() {
    // Print welcome message
    std::cout << banner().str();

    while (true) {
        // Print menu and get valid user choice
        char choice{Menu().getValidChoice()};

        std::cout << "Option " << choice << " was selected.\n";
        switch (choice) {
            case '1': {
                BMICalculator2 calculator(std::cin);
                std::cout << "Your BMI is: " << calculator.get() << "\n";
                break;
            }
            case '4':
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Option " << choice << " not implemented\n";
                break;
        }
    }

    return 0;
}