#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize Person details
    Person(string n, int a) : name(n), age(a) {}

    // Getter methods for Person details
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // Display method to show Person details
    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Employee
class Employee : public Person {
private:
    string jobTitle;
    double salary;

public:
    // Constructor to initialize Employee details
    Employee(string n, int a, string job, double sal)
        : Person(n, a), jobTitle(job), salary(sal) {}

    // Getter methods for Employee details
    string getJobTitle() const {
        return jobTitle;
    }

    double getSalary() const {
        return salary;
    }

    // Display method to show Employee details, including base class data
    void displayEmployee() const {
        displayPerson();  // Call base class method to display Person details
        cout << "Job Title: " << jobTitle << ", Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp("John Doe", 30, "Software Engineer", 80000);

    // Display Employee details
    emp.displayEmployee();

    return 0;
}
