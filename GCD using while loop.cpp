#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Ensure that both numbers are positive
    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive numbers." << endl;
        return 1;
    }

    // Using Euclidean algorithm to find GCD
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;  // Subtract the smaller number from the larger one
        else
            num2 -= num1;  // Subtract the smaller number from the larger one
    }

    cout << "The GCD of the two numbers is: " << num1 << endl;

    return 0;
}
