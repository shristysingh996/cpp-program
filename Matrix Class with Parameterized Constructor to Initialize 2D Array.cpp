#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;         // Private attributes for the number of rows and columns
    int **matrixArray;      // Pointer to a dynamically allocated 2D array

public:
    // Parameterized constructor to initialize the matrix with given rows, columns, and values
    Matrix(int r, int c) {
        rows = r;
        cols = c;

        // Dynamically allocate memory for the 2D array (matrix)
        matrixArray = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrixArray[i] = new int[cols];
        }

        // Initialize the matrix with user input or default values
        cout << "Enter elements for a " << rows << "x" << cols << " matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> matrixArray[i][j];
            }
        }
    }

    // Method to display the matrix
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrixArray[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Destructor to deallocate the memory for the matrix
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrixArray[i];  // Deallocate each row
        }
        delete[] matrixArray;         // Deallocate the matrix array
    }
};

int main() {
    int r, c;

    // Ask the user to input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    // Create a Matrix object with user-specified dimensions
    Matrix m(r, c);

    // Display the matrix
    m.displayMatrix();

    return 0;
}
