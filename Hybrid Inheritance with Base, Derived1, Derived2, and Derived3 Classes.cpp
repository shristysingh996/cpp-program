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

// Derived class Derived1 inheriting from Base
class Derived1 : public Base {
public:
    // Method specific to Derived1
    void displayDerived1Message() const {
        cout << "This is Derived1 class." << endl;
    }
};

// Derived class Derived2 inheriting from Base
class Derived2 : public Base {
public:
    // Method specific to Derived2
    void displayDerived2Message() const {
        cout << "This is Derived2 class." << endl;
    }
};

// Derived class Derived3 inheriting from both Derived1 and Derived2 (Multiple Inheritance)
class Derived3 : public Derived1, public Derived2 {
public:
    // Method specific to Derived3
    void displayDerived3Message() const {
        cout << "This is Derived3 class, which inherits from both Derived1 and Derived2." << endl;
    }
};

int main() {
    // Create an object of Derived3 class, which inherits from both Derived1 and Derived2
    Derived3 obj;

    // Calling methods from Base, Derived1, and Derived2 classes
    obj.displayBaseMessage();        // Inherited from Base
    obj.displayDerived1Message();    // Inherited from Derived1
    obj.displayDerived2Message();    // Inherited from Derived2
    obj.displayDerived3Message();    // Specific to Derived3

    return 0;
}
