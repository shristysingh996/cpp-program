#include <iostream>
#include <iomanip>  // For manipulators like setw, setprecision, fixed

using namespace std;

int main() {
    // Declare variables for demonstration
    double pi = 3.141592653589793;
    int num1 = 1234;
    int num2 = 5678;
    
    // Use setw to set the width of the output
    cout << "Formatted output using setw:" << endl;
    cout << setw(10) << num1 << setw(10) << num2 << endl;

    // Use setprecision and fixed to set the number of decimal places
    cout << "\nFormatted output using setprecision and fixed:" << endl;
    cout << fixed << setprecision(2) << pi << endl;  // Display pi with 2 decimal places

    // Combining setw with other manipulators
    cout << "\nCombining setw with other manipulators:" << endl;
    cout << setw(15) << "Pi value" << setw(15) << pi << endl;

    // Reset formatting and print original value
    cout << "\nOriginal value of Pi without formatting: " << pi << endl;

    return 0;
}
