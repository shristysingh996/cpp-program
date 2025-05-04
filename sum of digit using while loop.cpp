#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Use absolute value to handle negative numbers
    number = abs(number);

    // Calculate sum of digits using a while loop
    while (number != 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;         // Remove the last digit
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
