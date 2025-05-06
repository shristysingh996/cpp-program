#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;       // Private attribute for the student's name
    int age;           // Private attribute for the student's age
    static int totalStudents; // Static data member to keep track of total students

public:
    // Constructor to initialize student name and age
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
        totalStudents++;  // Increment total students when a new student is created
    }

    // Static method to get the total number of students
    static int getTotalStudents() {
        return totalStudents;
    }

    // Method to display student's details
    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

// Initialize the static member outside the class
int Student::totalStudents = 0;

int main() {
    // Creating Student objects
    Student student1("Alice", 20);
    Student student2("Bob", 22);
    Student student3("Charlie", 19);

    // Displaying student details
    student1.displayStudentDetails();
    student2.displayStudentDetails();
    student3.displayStudentDetails();

    // Display the total number of students enrolled
    cout << "\nTotal students enrolled: " << Student::getTotalStudents() << endl;

    return 0;
}
