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

// Derived class Derived3 inheriting from Base
class Derived3 : public Base {
public:
    // Method specific to Derived3
    void displayDerived3Message() const {
        cout << "This is Derived3 class." << endl;
    }
};

int main() {
    // Creating objects of the derived classes
    Derived1 obj1;
    Derived2 obj2;
    Derived3 obj3;

    // Calling methods from Base class and derived classes
    obj1.displayBaseMessage();     // Inherited from Base
    obj1.displayDerived1Message(); // Specific to Derived1

    obj2.displayBaseMessage();     // Inherited from Base
    obj2.displayDerived2Message(); // Specific to Derived2

    obj3.displayBaseMessage();     // Inherited from Base
    obj3.displayDerived3Message(); // Specific to Derived3

    return 0;
}
