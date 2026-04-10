
#include <iostream>

#include "bmi_calculator/bmi_calculator2.hpp"

void BMICalculator2::calculate() {
    double weight{getValueFromUser(std::string{"Enter weight in kilograms: "})};
    double height{getValueFromUser(std::string{"Enter height in meters: "})};

    // Calculate BMI
    mBMI = weight / (height * height);
}


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




double BMICalculator2::get() const {
    return mBMI;
}
