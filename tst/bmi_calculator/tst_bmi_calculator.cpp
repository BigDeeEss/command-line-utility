/// @file tst_bmi_calculator.cpp
/// @brief Implements unit tests for BMICalculator class
#include <gtest/gtest.h>

#include "bmi_calculator/bmi_calculator.hpp"


/// @brief Tests the calculation of BMI with valid input
TEST(BMICalculator2Test, TestCalculateBMIWithValidInput) {
    std::stringstream input("70\n1.75\n");
    std::stringstream output;
    BMICalculator calculator(input, output);

    EXPECT_DOUBLE_EQ(calculator.get(), 22.857142857142858);
}




/// @brief Tests the calculation of BMI with valid input
TEST(BMICalculator2Test, TestCalculateBMIWithNonValidInput) {
    std::stringstream input("-1.0\n70\n-2.0\n1.75\n");
    std::stringstream output;
    BMICalculator calculator(input, output);
    // BMICalculator calculator(input);

    EXPECT_DOUBLE_EQ(calculator.get(), 22.857142857142858);
}