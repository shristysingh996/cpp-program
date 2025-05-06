#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr;       // Pointer to dynamically allocated array
    int size;       // Size of the array

public:
    // Parameterized constructor to initialize the array with the specified size
    DynamicArray(int s) {
        size = s;
        arr = new int[size];  // Dynamically allocate memory for the array

        // Initializing array elements with zeros
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
        cout << "Array of size " << size << " created." << endl;
    }

    // Method to set a value at a specific index
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    // Method to display the array elements
    void displayArray() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to deallocate the dynamically allocated memory
    ~DynamicArray() {
        delete[] arr;  // Deallocate memory
        cout << "Dynamically allocated memory for the array is deallocated." << endl;
    }
};

int main() {
    // Create a DynamicArray object with a size of 5
    DynamicArray array(5);

    // Set values for the array
    array.setValue(0, 10);
    array.setValue(1, 20);
    array.setValue(2, 30);
    array.setValue(3, 40);
    array.setValue(4, 50);

    // Display the array
    array.displayArray();

    // The memory will be automatically deallocated when the object goes out of scope
    return 0;
}
