#include <iostream>
#include <string>
using namespace std;

// Abstract class
class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    // Pure virtual functions
    virtual double calculateSalary() const = 0;
    virtual void displayDetails() const = 0;

    // Virtual destructor for cleanup in derived classes
    virtual ~Employee() {}
};

// Derived class: Manager
class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(string n, int i, double base, double b)
        : Employee(n, i), baseSalary(base), bonus(b) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void displayDetails() const override {
        cout << "Manager Details:\n";
        cout << "Name: " << name << ", ID: " << id << "\n";
        cout << "Salary: $" << calculateSalary() << "\n";
    }
};

// Derived class: Engineer
class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Engineer(string n, int i, double rate, int hours)
        : Employee(n, i), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }

    void displayDetails() const override {
        cout << "Engineer Details:\n";
        cout << "Name: " << name << ", ID: " << id << "\n";
        cout << "Salary: $" << calculateSalary() << "\n";
    }
};

// Main function
int main() {
    // Create Manager and Engineer objects
    Manager m("Alice", 101, 5000, 1200);
    Engineer e("Bob", 202, 50, 160);

    // Use base class pointers to demonstrate polymorphism
    Employee* emp1 = &m;
    Employee* emp2 = &e;

    emp1->displayDetails();
    cout << endl;
    emp2->displayDetails();

    return 0;
}
