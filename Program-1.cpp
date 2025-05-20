#include <iostream>
#include <string>
#include <stdexcept> // For exception handling

class Calculator {
public:
    // Method to perform calculation
    double calculate(double a, double b, const std::string& operation) {
        if (operation == "add" || operation == "+") {
            return add(a, b);
        } else if (operation == "subtract" || operation == "-") {
            return subtract(a, b);
        } else if (operation == "multiply" || operation == "*") {
            return multiply(a, b);
        } else if (operation == "divide" || operation == "/") {
            return divide(a, b);
        } else {
            throw std::invalid_argument("Invalid operation. Please use: add(+), subtract(-), multiply(*), or divide(/)");
        }
    }

private:
    // Addition
    double add(double a, double b) {
        return a + b;
    }

    // Subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Division with zero check
    double divide(double a, double b) {
        if (b == 0) {
            throw std::runtime_error("Division by zero error");
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double a, b;
    std::string operation;

    std::cout << "Simple Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter operation (add/+, subtract/-, multiply/*, divide/): ";
    std::cin >> operation;

    try {
        double result = calc.calculate(a, b, operation);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
