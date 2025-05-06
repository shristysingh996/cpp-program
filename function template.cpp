#include <iostream>
using namespace std;

// Function template to swap two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Using the swap function with integers
    int x = 5, y = 10;
    cout << "Before swapping (int): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping (int): x = " << x << ", y = " << y << endl;

    // Using the swap function with floating point numbers
    float m = 3.14f, n = 2.718f;
    cout << "\nBefore swapping (float): m = " << m << ", n = " << n << endl;
    swapValues(m, n);
    cout << "After swapping (float): m = " << m << ", n = " << n << endl;

    // Using the swap function with strings
    string str1 = "Hello", str2 = "World";
    cout << "\nBefore swapping (string): str1 = " << str1 << ", str2 = " << str2 << endl;
    swapValues(str1, str2);
    cout << "After swapping (string): str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}
