#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}
