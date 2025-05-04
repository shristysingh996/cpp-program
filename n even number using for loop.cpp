#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "The first " << N << " even numbers are: ";
    for (int i = 1; i <= N; ++i) {
        cout << 2 * i << " ";  // Multiply i by 2 to get even numbers
    }
    cout << endl;

    return 0;
}
