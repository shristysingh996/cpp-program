#include <iostream>
#include <string>
using namespace std;

// Base class
class Base {
public:
    // Method in the Base class
    void displayBaseMessage() const {
        cout << "This is the Base class." << endl;
    }
};

// Intermediate class inheriting from Base
class Intermediate : public Base {
public:
    // Method specific to Intermediate
    void displayIntermediateMessage() const {
        cout << "This is the Intermediate class." << endl;
    }
};

// Derived class inheriting from Intermediate, which itself inherits from Base
class Derived : public Intermediate {
public:
    // Method specific to Derived
    void displayDerivedMessage() const {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    // Create an object of Derived class
    Derived obj;

    // Calling methods from Base, Intermediate, and Derived classes
    obj.displayBaseMessage();        // Inherited from Base
    obj.displayIntermediateMessage(); // Inherited from Intermediate
    obj.displayDerivedMessage();      // Specific to Derived

    return 0;
}
