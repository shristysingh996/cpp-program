#include <iostream>
using namespace std;

int main() {
    int number, original, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> number;

    original = number;  // Store the original number for comparison

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;      // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        number /= 10;                  // Remove the last digit
    }

    // Check if the original number is equal to its reverse
    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;

    return 0;
}
