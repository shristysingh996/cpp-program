#include <iostream>
using namespace std;

class Math {
public:
    // Static function for addition
    static int add(int a, int b) {
        return a + b;
    }

    // Static function for subtraction
    static int subtract(int a, int b) {
        return a - b;
    }

    // Static function for multiplication
    static int multiply(int a, int b) {
        return a * b;
    }

    // Static function for division
    static double divide(int a, int b) {
        if (b != 0)
            return static_cast<double>(a) / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    int num1 = 10, num2 = 5;

    // Calling static functions directly using class name
    cout << "Addition: " << Math::add(num1, num2) << endl;
    cout << "Subtraction: " << Math::subtract(num1, num2) << endl;
    cout << "Multiplication: " << Math::multiply(num1, num2) << endl;
    cout << "Division: " << Math::divide(num1, num2) << endl;

    return 0;
}
