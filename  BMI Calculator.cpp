
#include <iostream>
#include <iomanip>

class BMICalculator {
public:
    static double calculate(double weight, double height) {
        return weight / (height * height);
    }
    
    static std::string getCategory(double bmi) {
        if (bmi < 18.5) return "Underweight";
        else if (bmi < 25) return "Normal";
        else if (bmi < 30) return "Overweight";
        else return "Obese";
    }
};

int main() {
    double weight, height;
    
    std::cout << "Enter weight (kg): ";
    std::cin >> weight;
    std::cout << "Enter height (m): ";
    std::cin >> height;
    
    double bmi = BMICalculator::calculate(weight, height);
    std::string category = BMICalculator::getCategory(bmi);
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "BMI: " << bmi << " (" << category << ")\n";
    
    return 0;
}

