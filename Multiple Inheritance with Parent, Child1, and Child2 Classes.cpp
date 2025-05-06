#include <iostream>
#include <string>
using namespace std;

// Base class Parent
class Parent {
public:
    // Method to display Parent's message
    void displayParentMessage() const {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class Child1 from Parent
class Child1 : public Parent {
public:
    // Method specific to Child1
    void displayChild1Message() const {
        cout << "This is Child1 class." << endl;
    }
};

// Derived class Child2 from Parent
class Child2 : public Parent {
public:
    // Method specific to Child2
    void displayChild2Message() const {
        cout << "This is Child2 class." << endl;
    }
};

// Derived class from both Child1 and Child2 (Multiple Inheritance)
class Child3 : public Child1, public Child2 {
public:
    // Method specific to Child3
    void displayChild3Message() const {
        cout << "This is Child3 class, which inherits from both Child1 and Child2." << endl;
    }
};

int main() {
    // Create an object of Child3, which inherits from Child1 and Child2
    Child3 obj;

    // Calling methods from Parent, Child1, and Child2 using Child3 object
    obj.displayParentMessage();    // Inherited from Parent
    obj.displayChild1Message();    // Inherited from Child1
    obj.displayChild2Message();    // Inherited from Child2
    obj.displayChild3Message();    // Method of Child3 class

    return 0;
}
