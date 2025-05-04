#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int sum = 0;

    // Calculate sum using while loop
    while (i <= 50) {
        sum += i;
        i++;
    }

    cout << "The sum of the first 50 natural numbers is: " << sum << endl;

    return 0;
}
