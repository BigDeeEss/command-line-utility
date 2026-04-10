
#pragma once

#include <istream>

class BMICalculator2 {
  public:
    BMICalculator2(std::istream& input) : mInput(input), mBMI{0.0} {
        calculate();
    }

    ~BMICalculator2() = default;

    void calculate();

    double get() const;  

    double getValueFromUser(const std::string& prompt) const;

  private:
    std::istream& mInput;
    double mBMI;
};