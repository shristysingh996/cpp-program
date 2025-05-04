#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

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
        sum += arr[i];  // Add each element to sum
    }

    double average = sum / n;
    cout << "The average of the array elements is: " << average << endl;

    return 0;
}
