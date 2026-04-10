/// @file bmi_calculator2.cpp
/// @brief Implements BMICalculator2 class which calculates Body Mass Index
/// (BMI)
#include <iostream>

#include "bmi_calculator/bmi_calculator2.hpp"


/// @brief Calculates BMI from user input for weight and height
void BMICalculator2::calculateBMI() {
    double weight{getValueFromUser(std::string{"Enter weight in kilograms: "})};
    double height{getValueFromUser(std::string{"Enter height in meters: "})};

    // Calculate BMI
    mBMI = weight / (height * height);
}




/// @brief Prompts user for input and validates that it's a positive number
/// @param prompt The message to display to the user when asking for input
/// @return The validated user input
double BMICalculator2::getValueFromUser(const std::string& prompt) const {
    double value{0.0};
    std::cout << prompt;
    mInput >> value;

    // Validate user input
    if (value <= 0) {
        std::cout << "Invalid input. Value must be a positive number.\n";

        // Recursively call getValueFromUser until valid input is received
        return getValueFromUser(prompt);
    }

    return value;
}




/// @brief Returns the calculated BMI value
/// @return The calculated BMI value
double BMICalculator2::get() const { return mBMI; }
