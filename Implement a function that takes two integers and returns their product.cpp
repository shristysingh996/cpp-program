#include <iostream>
using namespace std;

// Function prototype
int multiply(int a, int b);

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int result = multiply(num1, num2);
    cout << "Product: " << result << endl;

    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
