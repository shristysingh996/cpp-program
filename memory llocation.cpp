#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Initialize array using pointer
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    // Display array elements
    cout << "\nYou entered:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": " << *(arr + i) << endl;
    }

    // Free the allocated memory
    delete[] arr;

    return 0;
}
