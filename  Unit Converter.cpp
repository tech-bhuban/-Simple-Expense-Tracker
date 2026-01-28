
#include <iostream>
#include <map>

class UnitConverter {
private:
    std::map<std::string, double> conversionFactors;
    
public:
    UnitConverter() {
        // Temperature conversions (Celsius base)
        conversionFactors["c_to_f"] = 9.0/5.0;
        conversionFactors["c_to_k"] = 1.0;
        
        // Length conversions (Meter base)
        conversionFactors["m_to_km"] = 0.001;
        conversionFactors["m_to_mile"] = 0.000621371;
        conversionFactors["m_to_ft"] = 3.28084;
    }
    
    double celsiusToFahrenheit(double celsius) {
        return (celsius * conversionFactors["c_to_f"]) + 32;
    }
    
    double metersToFeet(double meters) {
        return meters * conversionFactors["m_to_ft"];
    }
    
    double kilometersToMiles(double km) {
        return km * 0.621371;
    }
};

int main() {
    UnitConverter converter;
    
    std::cout << "20°C = " << converter.celsiusToFahrenheit(20) << "°F\n";
    std::cout << "100m = " << converter.metersToFeet(100) << "ft\n";
    std::cout << "10km = " << converter.kilometersToMiles(10) << " miles\n";
    
    return 0;
}

