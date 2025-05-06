#include <iostream>
#include <cmath>  // for pow()
using namespace std;

// Function to calculate power with a default exponent of 2
double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter exponent (press 0 to use default 2): ";
    cin >> exponent;

    if (exponent == 0)
        cout << "Result: " << power(base) << endl;  // uses default exponent
    else
        cout << "Result: " << power(base, exponent) << endl;

    return 0;
}
