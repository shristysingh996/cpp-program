 #include <iostream>
using namespace std;

// Function prototype
void modifyArray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before modification: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    modifyArray(arr, size);

    cout << "Array after modification: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function definition
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;  // Modify each element by multiplying by 2
    }
}
