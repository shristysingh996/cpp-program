#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;     // Private attribute for name
    string position; // Private attribute for position
    double salary;   // Private attribute for salary

public:
    // Constructor to initialize employee attributes
    Employee(string empName, string empPosition, double empSalary) {
        name = empName;
        position = empPosition;
        salary = empSalary;
    }

    // Method to display employee details
    void displayEmployeeDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Creating an object of Employee class
    Employee emp1("John Doe", "Software Engineer", 75000.0);

    // Displaying employee details
    emp1.displayEmployeeDetails();

    return 0;
}
