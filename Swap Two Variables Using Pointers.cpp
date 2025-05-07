#include <iostream>
using namespace std;

// Function to swap two integers using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Enter two integers:\n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    // Call swap function using addresses of x and y
    swap(&x, &y);

    cout << "After swapping:  x = " << x << ", y = " << y << endl;

    return 0;
}
