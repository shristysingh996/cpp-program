#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 and 100 are: ";

    for (int num = 2; num <= 100; ++num) {
        bool isPrime = true;

        // Check if num is divisible by any number from 2 to num/2
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    cout << endl;

    return 0;
}
