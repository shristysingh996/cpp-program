#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    // Virtual function for overriding
    virtual void showDetails() const {
        cout << "I am a generic employee." << endl;
    }

    virtual ~Employee() {}
};

// Derived class: Manager
class Manager : public Employee {
public:
    void showDetails() const override {
        cout << "I am a Manager. I manage projects and teams." << endl;
    }
};

// Derived class: Worker
class Worker : public Employee {
public:
    void showDetails() const override {
        cout << "I am a Worker. I complete assigned tasks." << endl;
    }
};

// Main function to demonstrate function overriding
int main() {
    Employee* emp;

    emp = new Employee();
    emp->showDetails();
    delete emp;

    emp = new Manager();
    emp->showDetails();
    delete emp;

    emp = new Worker();
    emp->showDetails();
    delete emp;

    return 0;
}
