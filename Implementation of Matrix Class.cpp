#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Sparse Matrix class definition
class SparseMatrix {
private:
    int rows, cols;
    vector<tuple<int, int, int>> elements;  // Vector to store (row, col, value) for non-zero elements

public:
    // Constructor to initialize the matrix with dimensions and non-zero elements
    SparseMatrix(int r, int c) : rows(r), cols(c) {}

    // Function to add a non-zero element
    void addElement(int row, int col, int value) {
        if (value != 0) {
            elements.push_back(make_tuple(row, col, value));
        }
    }

    // Display the sparse matrix in a readable format
    void display() const {
        cout << "Sparse Matrix (" << rows << "x" << cols << "):\n";
        for (const auto& elem : elements) {
            cout << "Row " << get<0>(elem) << ", Col " << get<1>(elem) << ": " << get<2>(elem) << endl;
        }
    }

    // Function to add two sparse matrices
    SparseMatrix add(const SparseMatrix& other) const {
        SparseMatrix result(rows, cols);
        
        // Create a hash map for the other matrix's elements
        unordered_map<pair<int, int>, int, hash<pair<int, int>>> other_elements;
        for (const auto& elem : other.elements) {
            other_elements[{get<0>(elem), get<1>(elem)}] = get<2>(elem);
        }

        // Add elements of the current matrix to the result
        for (const auto& elem : elements) {
            int row = get<0>(elem), col = get<1>(elem), value = get<2>(elem);
            other_elements[{row, col}] += value;  // Add value to any existing element in the other matrix

            if (other_elements[{row, col}] != 0) {
                result.addElement(row, col, other_elements[{row, col}]);
            }
        }

        // Add remaining elements from the other matrix
        for (const auto& elem : other_elements) {
            if (elem.second != 0) {
                result.addElement(elem.first.first, elem.first.second, elem.second);
            }
        }

        return result;
    }

    // Function to multiply two sparse matrices
    SparseMatrix multiply(const SparseMatrix& other) const {
        SparseMatrix result(rows, other.cols);

        // Use a hash map to store elements of the second matrix for quick lookup
        unordered_map<int, unordered_map<int, int>> other_elements;
        for (const auto& elem : other.elements) {
            other_elements[get<0>(elem)][get<1>(elem)] = get<2>(elem);
        }

        // Multiply elements of the current matrix with the other matrix
        for (const auto& elem1 : elements) {
            int row1 = get<0>(elem1), col1 = get<1>(elem1), value1 = get<2>(elem1);
            
            for (int col2 = 0; col2 < other.cols; ++col2) {
                if (other_elements.find(col1) != other_elements.end() &&
                    other_elements[col1].find(col2) != other_elements[col1].end()) {
                    int value2 = other_elements[col1][col2];
                    result.addElement(row1, col2, result.getValue(row1, col2) + value1 * value2);
                }
            }
        }

        return result;
    }

    // Helper function to get the value of an element at a specific position
    int getValue(int row, int col) const {
        for (const auto& elem : elements) {
            if (get<0>(elem) == row && get<1>(elem) == col) {
                return get<2>(elem);
            }
        }
        return 0;
    }
};

// Main function to test SparseMatrix
int main() {
    // Create two sparse matrices
    SparseMatrix matrix1(3, 3); // 3x3 matrix
    SparseMatrix matrix2(3, 3); // 3x3 matrix

    // Add non-zero elements to matrix1
    matrix1.addElement(0, 0, 5);
    matrix1.addElement(1, 2, 8);
    matrix1.addElement(2, 1, 4);

    // Add non-zero elements to matrix2
    matrix2.addElement(0, 1, 3);
    matrix2.addElement(1, 0, 7);
    matrix2.addElement(2, 2, 2);

    // Display the matrices
    cout << "Matrix 1:\n";
    matrix1.display();
    cout << "Matrix 2:\n";
    matrix2.display();

    // Add the matrices
    SparseMatrix sum = matrix1.add(matrix2);
    cout << "Sum of Matrix 1 and Matrix 2:\n";
    sum.display();

    // Multiply the matrices
    SparseMatrix product = matrix1.multiply(matrix2);
    cout << "Product of Matrix 1 and Matrix 2:\n";
    product.display();

    return 0;
}
