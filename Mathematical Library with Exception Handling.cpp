#include <iostream>
#include <stdexcept>
#include <cmath>  // For sqrt
#include <limits> // For numeric_limits

using namespace std;

// Exception class for division by zero
class DivisionByZeroException : public runtime_error {
public:
    DivisionByZeroException() : runtime_error("Error: Division by zero.") {}
};

// Exception class for invalid square root (negative number)
class InvalidSqrtException : public runtime_error {
public:
    InvalidSqrtException() : runtime_error("Error: Cannot compute square root of a negative number.") {}
};

// Function template for safe division
template <typename T>
T safe_divide(T numerator, T denominator) {
    if (denominator == 0) {
        throw DivisionByZeroException();  // Throw exception if denominator is zero
    }
    return numerator / denominator;
}

// Function template for safe square root calculation
template <typename T>
T safe_sqrt(T value) {
    if (value < 0) {
        throw InvalidSqrtException();  // Throw exception if value is negative
    }
    return sqrt(value);
}

// Function to handle user input and perform operations
void perform_operations() {
    try {
        double num1, num2;

        // Division operation
        cout << "Enter two numbers to divide (numerator denominator): ";
        cin >> num1 >> num2;
        if (cin.fail()) throw invalid_argument("Error: Invalid input.");
        cout << "Result of division: " << safe_divide(num1, num2) << endl;

        // Square root operation
        cout << "Enter a number to compute its square root: ";
        cin >> num1;
        if (cin.fail()) throw invalid_argument("Error: Invalid input.");
        cout << "Square root: " << safe_sqrt(num1) << endl;
        
    } catch (const DivisionByZeroException& e) {
        cout << e.what() << endl;
    } catch (const InvalidSqrtException& e) {
        cout << e.what() << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    } catch (const exception& e) {
        cout << "Unexpected error: " << e.what() << endl;
    }
}

int main() {
    perform_operations();
    return 0;
}
