/// @file bmi_calculator2.hpp
/// @brief Declares BMICalculator class which calculates Body Mass Index (BMI
#pragma once

#include <istream>


/// @class BMICalculator
/// @brief Calculates Body Mass Index (BMI) from user input for weight and
/// height
class BMICalculator {
  public:
    /// @brief Constructs a BMICalculator object and calculates BMI from user
    /// input
    /// @param input The input stream to read user input from
    /// @note Delegates to the constructor that takes both input and output
    /// streams
    explicit BMICalculator(std::istream& input)
        : BMICalculator(input, std::cout) {}

    /// @brief Constructs a BMICalculator object and calculates BMI from user
    /// input
    /// @param input The input stream to read user input from
    /// @param output The output stream to display user instructions
    /// @note Allows for easier testing by injecting different output streams
    explicit BMICalculator(std::istream& input, std::ostream& output)
        : mInput(input), mOutput(output), mBMI{calculateBMI()} {}

    ~BMICalculator() = default;

    /// @brief Calculates BMI from user input for weight and height
    /// @return The calculated BMI value
    double calculateBMI();

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

    /// @brief Output stream for displaying user instructions
    /// @note Allows for easier testing by injecting different output streams
    std::ostream& mOutput;

    /// @brief The calculated BMI value
    double mBMI;
};