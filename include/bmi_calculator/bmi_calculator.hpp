

class BMICalculator {
public:
    /// @brief Calculates BMI based on user input for weight and height
    static void calculate() {        
        double weight{0.0};
        double height{0.0};

        // Get user input for weight and height
        std::cout << "Enter weight in kilograms: ";
        std::cin >> weight;
        std::cout << "Enter height in meters: ";
        std::cin >> height;

        // Validate user input
        if (weight <= 0 || height <= 0) {
            std::cout << "Invalid input. Weight and height must be positive numbers.\n";
            return;
        }

        // Calculate BMI
        double bmi = weight / (height * height);

        // Print BMI result
        std::cout << "Your BMI is: " << bmi << "\n";
    }
};