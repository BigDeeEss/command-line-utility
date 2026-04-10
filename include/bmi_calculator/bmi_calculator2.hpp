/// @file bmi_calculator2.hpp
/// @brief Declares BMICalculator2 class which calculates Body Mass Index (BMI
#pragma once

#include <istream>


/// @class BMICalculator2
/// @brief Calculates Body Mass Index (BMI) from user input for weight and
/// height
class BMICalculator2 {
  public:
    /// @brief Constructs a BMICalculator2 object and calculates BMI from user
    /// input
    explicit BMICalculator2(std::istream& input) : mInput(input), mBMI{0.0} {
        calculateBMI();
    }

    ~BMICalculator2() = default;

    /// @brief Calculates BMI from user input for weight and height
    void calculateBMI();

    /// @brief Returns the calculated BMI value
    double get() const;

    /// @brief Prompts user for input and validates that it's a positive number
    /// @param prompt The message to display to the user when asking for input 
    /// @return The validated user input
    double getValueFromUser(const std::string& prompt) const;

  private:
    /// @brief Input stream for reading user input
    /// @note Allows for easier testing by injecting different input streams
    std::istream& mInput;

    /// @brief The calculated BMI value
    double mBMI;
};