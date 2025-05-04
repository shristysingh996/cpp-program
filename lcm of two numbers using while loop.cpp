#include <iostream>
using namespace std;

// Function to calculate the LCM of two numbers
int findLCM(int a, int b) {
    int lcm = max(a, b); // Start with the maximum of a and b
    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            return lcm; // Return the LCM once found
        }
        lcm++; // Increment lcm until it's divisible by both a and b
    }
}

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the findLCM function and display the result
    cout << "LCM of " << num1 << " and " << num2 << " is " << findLCM(num1, num2) << endl;

    return 0;
}
