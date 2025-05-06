#include <iostream>
using namespace std;

// Function prototype
void printArray(int arr[], int size);

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Array elements: ";
    printArray(numbers, size);

    return 0;
}

// Function definition
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
