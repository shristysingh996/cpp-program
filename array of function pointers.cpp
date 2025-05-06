#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

int main() {
    // Array of function pointers
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};
    
    int num1, num2, choice;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Call the selected function using the function pointer array
    if (choice >= 1 && choice <= 4) {
        int result = operations[choice - 1](num1, num2);
        cout << "The result is: " << result << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
