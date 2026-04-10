/// @file bmi_calculator2.cpp
/// @brief Implements BMICalculator class which calculates Body Mass Index
/// (BMI)
#include <iostream>

#include "bmi_calculator/bmi_calculator.hpp"


/// @brief Calculates BMI from user input for weight and height
/// @return The calculated BMI value
double BMICalculator::calculateBMI() {
    // Get weight and height from user
    double weight{getValueFromUser(std::string{"Enter weight in kilograms: "})};
    double height{getValueFromUser(std::string{"Enter height in meters: "})};

    // Calculate BMI
    return weight / (height * height);
}




/// @brief Prompts user for input and validates that it's a positive number
/// @param prompt The message to display to the user when asking for input
/// @return The validated user input
double BMICalculator::getValueFromUser(const std::string& prompt) const {
    // Prompt user for input
    // mOutput is an instance of sd::cout or std::stringstream for testing
    mOutput << prompt;

    // Read user input
    double value{0.0};
    mInput >> value;

    // Validate user input
    if (value <= 0) {
        // mOutput is an instance of sd::cout or std::stringstream for testing
        mOutput << "Invalid input. Value must be a positive number.\n";

        // Recursively call getValueFromUser until valid input is received
        return getValueFromUser(prompt);
    }

    return value;
}




/// @brief Returns the calculated BMI value
/// @return The calculated BMI value
double BMICalculator::get() const { return mBMI; }
