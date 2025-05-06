#include <iostream>
using namespace std;

// Function to find max of two numbers
int maxValue(int a, int b) {
    return (a > b) ? a : b;
}

// Overloaded function to find max of three numbers
int maxValue(int a, int b, int c) {
    return maxValue(maxValue(a, b), c);
}

int main() {
    int x, y, z;

    // Max of two numbers
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Maximum of " << x << " and " << y << " is: " << maxValue(x, y) << endl;

    // Max of three numbers
    cout << "\nEnter three integers: ";
    cin >> x >> y >> z;
    cout << "Maximum of " << x << ", " << y << ", and " << z << " is: " << maxValue(x, y, z) << endl;

    return 0;
}
