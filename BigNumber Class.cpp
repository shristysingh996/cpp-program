#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BigNumber {
private:
    string number;  // Store number as a string

public:
    // Constructor
    BigNumber(string num = "0") {
        // Remove leading zeros
        number = num;
        number.erase(0, number.find_first_not_of('0'));
        if (number.empty()) number = "0";
    }

    // Display the number
    void display() const {
        cout << number << endl;
    }

    // Addition of two BigNumber objects
    BigNumber add(const BigNumber& other) const {
        string num1 = number;
        string num2 = other.number;

        // Make both numbers the same length by padding with zeros
        if (num1.length() < num2.length())
            num1.insert(0, num2.length() - num1.length(), '0');
        else
            num2.insert(0, num1.length() - num2.length(), '0');

        string result = "";
        int carry = 0;

        for (int i = num1.length() - 1; i >= 0; --i) {
            int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
            result += (sum % 10) + '0';
            carry = sum / 10;
        }

        if (carry)
            result += (carry + '0');

        reverse(result.begin(), result.end());
        return BigNumber(result);
    }

    // Overloaded + operator
    BigNumber operator+(const BigNumber& other) const {
        return this->add(other);
    }
};

// Example usage
int main() {
    BigNumber num1("98765432101234567890");
    BigNumber num2("12345678909876543210");

    BigNumber sum = num1 + num2;

    cout << "Number 1: ";
    num1.display();
    cout << "Number 2: ";
    num2.display();
    cout << "Sum: ";
    sum.display();

    return 0;
}
