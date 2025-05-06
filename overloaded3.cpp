#include <iostream>
#include <string>
using namespace std;

// Overloaded function to print an integer
void print(int value) {
    cout << "Integer: " << value << endl;
}

// Overloaded function to print a float
void print(float value) {
    cout << "Float: " << value << endl;
}

// Overloaded function to print a string
void print(string value) {
    cout << "String: " << value << endl;
}

int main() {
    int i = 42;
    float f = 3.14f;
    string s = "Hello, world!";

    // Call overloaded functions
    print(i);
    print(f);
    print(s);

    return 0;
}
