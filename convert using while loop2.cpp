#include <iostream>
#include <stack>
using namespace std;

int main() {
    int decimalNumber;
    stack<int> binaryStack;

    // Input the decimal number
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Convert decimal to binary
    while (decimalNumber > 0) {
        binaryStack.push(decimalNumber % 2);
        decimalNumber /= 2;
    }

    // Display the binary number
    cout << "Binary representation: ";
    while (!binaryStack.empty()) {
        cout << binaryStack.top();
        binaryStack.pop();
    }
    cout << endl;

    return 0;
}
