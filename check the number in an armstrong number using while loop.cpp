#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, originalNumber, remainder, numDigits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Find the number of digits in the number
    while (number != 0) {
        number /= 10;
        numDigits++;
    }

    number = originalNumber;  // Reset number to its original value

    // Calculate the sum of digits raised to the power of numDigits
    while (number != 0) {
        remainder = number % 10;
        sum += pow(remainder, numDigits);  // Raise each digit to the power of numDigits
        number /= 10;
    }

    // Check if the sum equals the original number
    if (sum == originalNumber)
        cout << originalNumber << " is an Armstrong number." << endl;
    else
        cout << originalNumber << " is not an Armstrong number." << endl;

    return 0;
}
