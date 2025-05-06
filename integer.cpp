#include <iostream>
using namespace std;

// Function prototype
int findMax(int a, int b, int c);

int main() {
    int x, y, z;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    int maxVal = findMax(x, y, z);
    cout << "The maximum value is: " << maxVal << endl;

    return 0;
}

// Function definition
int findMax(int a, int b, int c) {
    int max = a;

    if
