#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
private:
    string name;  // Private attribute for name
    int age;      // Private attribute for age

public:
    // Public method to set the name
    void setName(string personName) {
        name = personName;
    }

    // Public method to get the name
    string getName() {
        return name;
    }

    // Public method to set the age
    void setAge(int personAge) {
        age = personAge;
    }

    // Public method to get the age
    int getAge() {
        return age;
    }
};

// Derived class Student inherits from Person
class Student : public Person {
private:
    string studentID;  // Private attribute for student ID

public:
    // Public method to set student ID
    void setStudentID(string id) {
        studentID = id;
    }

    // Public method to get student ID
    string getStudentID() {
        return studentID;
    }
};

int main() {
    // Creating an object of the Student class
    Student student;

    // Setting name, age, and student ID using setter methods
    student.setName("Alice Johnson");
    student.setAge(20);
    student.setStudentID("S12345");

    // Getting name, age, and student ID using getter methods
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Student ID: " << student.getStudentID() << endl;

    return 0;
}
