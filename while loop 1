#include <iostream>
using namespace std;

int main() {
    int number, count = 0;
    cout << "Enter an integer: ";
    cin >> number;

    int original = number;

    // Handle 0 separately as it has 1 digit
    if (number == 0) {
        count = 1;
    } else {
        if (number < 0)
            number = -number; // Make number positive for digit counting

        while (number != 0) {
            number /= 10;
            count++;
        }
    }

    cout << "Number of digits in " << original << " is: " << count << endl;

    return 0;
}
