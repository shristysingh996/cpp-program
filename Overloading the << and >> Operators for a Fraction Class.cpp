#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;   // Numerator of the fraction
    int denominator; // Denominator of the fraction

public:
    // Constructor to initialize the fraction with numerator and denominator
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        if (den == 0) { // Prevent division by zero
            denominator = 1; // Default denominator is set to 1 if 0 is provided
        }
    }

    // Overload the "<<" operator to output the fraction
    friend ostream& operator<<(ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }

    // Overload the ">>" operator to input the fraction
    friend istream& operator>>(istream& is, Fraction& fraction) {
        cout << "Enter numerator: ";
        is >> fraction.numerator;
        cout << "Enter denominator: ";
        is >> fraction.denominator;
        
        // Handle the case of a zero denominator
        if (fraction.denominator == 0) {
            cout << "Denominator cannot be zero! Setting denominator to 1." << endl;
            fraction.denominator = 1;
        }
        
        return is;
    }
};

int main() {
    // Create a Fraction object
    Fraction f1;

    // Input fraction using the overloaded ">>" operator
    cout << "Enter a fraction:" << endl;
    cin >> f1;

    // Output the fraction using the overloaded "<<" operator
    cout << "The entered fraction is: " << f1 << endl;

    return 0;
}
