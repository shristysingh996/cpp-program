#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cube(int num) {
    return num * num * num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "The cube of " << number << " is: " << cube(number) << endl;

    return 0;
}
