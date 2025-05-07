#include <iostream>  // For input and output streams

using namespace std;

int main() {
    int number;  // Variable to store the current integer
    int sum = 0; // Variable to store the sum of the integers

    cout << "Enter integers to sum them. Enter 0 to stop and display the result.\n";

    // Loop to read integers from the user
    while (true) {
        cout << "Enter an integer: ";
        cin >> number;  // Read the integer from the user

        if (number == 0) {
            break;  // Stop if the user enters 0
        }

        sum += number;  // Add the current number to the sum
    }

    // Display the sum
    cout << "The total sum is: " << sum << endl;

    return 0;
}
