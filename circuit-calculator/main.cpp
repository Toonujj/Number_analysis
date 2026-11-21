#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    std::cout << "DC Circuit Calculator\n"
              << "1. Voltage from current and resistance\n"
              << "2. Current from voltage and resistance\n"
              << "3. Resistance from voltage and current\n"
              << "Choose a calculation: ";

    int choice;
    if (!(std::cin >> choice) || choice < 1 || choice > 3) {
        std::cerr << "Enter 1, 2, or 3.\n";
        return 1;
    }

    const char* prompts[] = {
        "Enter current (A) and resistance (ohms): ",
        "Enter voltage (V) and resistance (ohms): ",
        "Enter voltage (V) and current (A): "
    };
    std::cout << prompts[choice - 1];

    double first;
    double second;
    if (!(std::cin >> first >> second) || !std::isfinite(first) ||
        !std::isfinite(second) || first < 0 || second <= 0) {
        std::cerr << "Enter a nonnegative first value and a positive second value.\n";
        return 1;
    }

    double voltage;
    double current;
    double resistance;
    switch (choice) {
        case 1:
            current = first;
            resistance = second;
            voltage = current * resistance;
            break;
        case 2:
            voltage = first;
            resistance = second;
            current = voltage / resistance;
            break;
        default:
            voltage = first;
            current = second;
            resistance = voltage / current;
            break;
    }

    const double power = voltage * current;
    if (!std::isfinite(voltage) || !std::isfinite(current) ||
        !std::isfinite(resistance) || !std::isfinite(power)) {
        std::cerr << "The result is too large to display.\n";
        return 1;
    }

    std::cout << std::setprecision(6)
              << "\nVoltage: " << voltage << " V\n"
              << "Current: " << current << " A\n"
              << "Resistance: " << resistance << " ohms\n"
              << "Power: " << power << " W\n";
}
