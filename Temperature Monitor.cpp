
#include <iostream>
#include <vector>

class TemperatureMonitor {
private:
    std::vector<double> readings;
    
public:
    void addReading(double temp) {
        readings.push_back(temp);
    }
    
    double getAverage() {
        if (readings.empty()) return 0;
        
        double sum = 0;
        for (double temp : readings) {
            sum += temp;
        }
        return sum / readings.size();
    }
    
    double getMax() {
        if (readings.empty()) return 0;
        
        double max = readings[0];
        for (double temp : readings) {
            if (temp > max) max = temp;
        }
        return max;
    }
    
    double getMin() {
        if (readings.empty()) return 0;
        
        double min = readings[0];
        for (double temp : readings) {
            if (temp < min) min = temp;
        }
        return min;
    }
};

int main() {
    TemperatureMonitor monitor;
    
    monitor.addReading(22.5);
    monitor.addReading(23.1);
    monitor.addReading(21.8);
    monitor.addReading(24.3);
    monitor.addReading(22.9);
    
    std::cout << "Average: " << monitor.getAverage() << "°C\n";
    std::cout << "Maximum: " << monitor.getMax() << "°C\n";
    std::cout << "Minimum: " << monitor.getMin() << "°C\n";
    
    return 0;
}


// ### **9. Temperature Monitor**
// **Folder:** `09-temperature-monitor/README.md`
// ```markdown
// # 🌡️ Temperature Monitor

// Records and analyzes temperature readings with statistical calculations.

// ## 📊 Analytics
// - Average temperature
// - Maximum temperature
// - Minimum temperature
// - Temperature range

// ## 🚀 Usage
// ```bash
// g++ -o temp_monitor temp_monitor.cpp
// ./temp_monitor