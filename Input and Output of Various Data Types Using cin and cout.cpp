#include <iostream>  // For input and output streams
#include <string>    // For string type

using namespace std;

int main() {
    // Declare variables for different data types
    int integer;
    double floatingPoint;
    char character;
    string text;

    // Input and output integer
    cout << "Enter an integer: ";
    cin >> integer;
    cout << "You entered integer: " << integer << endl;

    // Input and output floating-point number
    cout << "Enter a floating-point number: ";
    cin >> floatingPoint;
    cout << "You entered floating-point number: " << floatingPoint << endl;

    // Input and output a character
    cout << "Enter a character: ";
    cin >> character;
    cout << "You entered character: " << character << endl;

    // Input and output a string
    cout << "Enter a string: ";
    cin >> text;  // `cin` will only read up to the first whitespace
    cout << "You entered string: " << text << endl;

    // To read an entire line with spaces, we can use `getline` instead of `cin >>`
    cin.ignore();  // To ignore any leftover newline character in the input buffer
    cout << "Enter a full sentence: ";
    getline(cin, text);  // Reads an entire line with spaces
    cout << "You entered sentence: " << text << endl;

    return 0;
}
