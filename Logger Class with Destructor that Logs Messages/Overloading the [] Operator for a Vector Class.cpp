#include <iostream>
using namespace std;

class Vector {
private:
    int* arr;        // Pointer to dynamically allocated array
    int size;        // Size of the vector

public:
    // Constructor to initialize the vector with a given size
    Vector(int s) : size(s) {
        arr = new int[size];  // Dynamically allocate memory for the vector
        for (int i = 0; i < size; i++) {
            arr[i] = 0;  // Initialize all elements to 0
        }
    }

    // Destructor to release dynamically allocated memory
    ~Vector() {
        delete[] arr;
    }

    // Overload the "[]" operator to access elements of the vector
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];  // Return reference to the element at the specified index
        } else {
            cout << "Index out of bounds!" << endl;
            exit(1);  // Exit program if the index is out of bounds
        }
    }

    // Method to display the vector elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Get size of the vector
    int getSize() const {
        return size;
    }
};

int main() {
    // Create a Vector object of size 5
    Vector v(5);

    // Assign values to vector elements using the overloaded "[]" operator
    for (int i = 0; i < v.getSize(); i++) {
        v[i] = (i + 1) * 10;  // Set values: 10, 20, 30, 40, 50
    }

    // Display the vector elements
    cout << "Vector elements: ";
    v.display();  // Output: 10 20 30 40 50

    // Access and modify vector elements using the overloaded "[]" operator
    cout << "Element at index 2: " << v[2] << endl;  // Output: 30
    v[2] = 100;  // Modify element at index 2
    cout << "Modified element at index 2: " << v[2] << endl;  // Output: 100

    return 0;
}
