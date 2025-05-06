#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    // Constructor to initialize employee details
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    // Virtual function to display employee details
    virtual void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }

    // Virtual destructor
    virtual ~Employee() {
        cout << "Employee object destroyed." << endl;
    }
};

// Derived class Manager inheriting from Employee
class Manager : public Employee {
private:
    int teamSize;

public:
    // Constructor to initialize manager details including team size
    Manager(string n, int i, double s, int t) : Employee(n, i, s), teamSize(t) {}

    // Override the displayDetails method to include manager-specific information
    void displayDetails() const override {
        // Call the base class method
        Employee::displayDetails();
        cout << "Team Size: " << teamSize << endl;
    }

    // Destructor for Manager
    ~Manager() {
        cout << "Manager object destroyed." << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp("John Doe", 101, 50000.0);
    // Create a Manager object
    Manager mgr("Alice Smith", 102, 80000.0, 10);

    // Display details of Employee
    cout << "\nEmployee Details:\n";
    emp.displayDetails();

    // Display details of Manager
    cout << "\nManager Details:\n";
    mgr.displayDetails();

    return 0;
}
