#include <iostream>
using namespace std;

int main() {
    int evenSum = 0;
    int oddSum = 0;

    // Sum of even numbers between 1 and 100
    for (int i = 2; i <= 100; i += 2) {
        evenSum += i;
    }

    // Sum of odd numbers between 1 and 100
    for (int i = 1; i <= 99; i += 2) {
        oddSum += i;
    }

    cout << "Sum of even numbers from 1 to
