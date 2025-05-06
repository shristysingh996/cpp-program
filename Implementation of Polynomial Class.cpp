#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
private:
    vector<int> coefficients; // Stores the coefficients of the polynomial

public:
    // Constructor to initialize the polynomial with a given list of coefficients
    Polynomial(vector<int> coeffs) {
        coefficients = coeffs;
    }

    // Function to display the polynomial
    void display() const {
        int degree = coefficients.size() - 1;
        for (int i = degree; i >= 0; --i) {
            if (coefficients[i] != 0) {
                if (i != degree) {
                    cout << (coefficients[i] > 0 ? " + " : " - ");
                }
                cout << abs(coefficients[i]);
                if (i > 0) {
                    cout << "x";
                    if (i > 1) cout << "^" << i;
                }
            }
        }
        cout << endl;
    }

    // Function to add two polynomials
    Polynomial add(const Polynomial& other) const {
        // The degree of the result is the maximum degree of both polynomials
        int degree = max(coefficients.size(), other.coefficients.size());
        vector<int> result(degree, 0);

        // Add coefficients of the two polynomials
        for (int i = 0; i < degree; ++i) {
            if (i < coefficients.size()) result[i] += coefficients[i];
            if (i < other.coefficients.size()) result[i] += other.coefficients[i];
        }

        return Polynomial(result);
    }

    // Function to multiply two polynomials
    Polynomial multiply(const Polynomial& other) const {
        int degree = coefficients.size() + other.coefficients.size() - 1;
        vector<int> result(degree, 0);

        // Multiply each term of the first polynomial with each term of the second polynomial
        for (int i = 0; i < coefficients.size(); ++i) {
            for (int j = 0; j < other.coefficients.size(); ++j) {
                result[i + j] += coefficients[i] * other.coefficients[j];
            }
        }

        return Polynomial(result);
    }
};

int main() {
    // Create two polynomials: p1 = 3x^2 + 2x + 1 and p2 = x^2 + x + 1
    Polynomial p1({1, 2, 3}); // Polynomial: 3x^2 + 2x + 1
    Polynomial p2({1, 1, 1}); // Polynomial: x^2 + x + 1

    cout << "Polynomial 1: ";
    p1.display();

    cout << "Polynomial 2: ";
    p2.display();

    // Add polynomials
    Polynomial sum = p1.add(p2);
    cout << "Sum: ";
    sum.display();

    // Multiply polynomials
    Polynomial product = p1.multiply(p2);
    cout << "Product: ";
    product.display();

    return 0;
}
