#include <iostream>
using namespace std;

// Function prototype
void incrementByTen(int &num);

int main() {
    int value;

    cout << "Enter an integer: ";
    cin >> value;

    incrementByTen(value);

    cout << "Value after incrementing by 10: " << value << endl;

    return 0;
}

// Function definition
void incrementByTen(int &num) {
    num += 10;  // Increment the value by 10
}
