#include <iostream>
using namespace std;

class Complex {
private:
    float real;   // Real part of the complex number
    float imag;   // Imaginary part of the complex number

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Method to display the complex number
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    // Overloading the '+' operator to add two Complex numbers
    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;  // Add real parts
        temp.imag = imag + other.imag;  // Add imaginary parts
        return temp;
    }
};

int main() {
    Complex c1(3.5, 2.5);  // First complex number: 3.5 + 2.5i
    Complex c2(1.5, 4.5);  // Second complex number: 1.5 + 4.5i

    // Add the two complex numbers using the overloaded '+' operator
    Complex result = c1 + c2;

    // Display the result
    cout << "The sum of the two complex numbers is: ";
    result.display();  // Output will be: 5.0 + 7.0i

    return 0;
}
