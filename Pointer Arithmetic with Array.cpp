#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int numbers[size] = {10, 20, 30, 40, 50};

    int* ptr = numbers;  // pointer to the first element of the array

    cout << "Accessing array elements using pointer arithmetic:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
