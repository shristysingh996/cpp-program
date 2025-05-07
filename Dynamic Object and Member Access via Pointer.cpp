#include <iostream>
using namespace std;

// Define the Student class
class Student {
private:
    string name;
    int age;

public:
    // Method to set student details
    void setDetails(const string& n, int a) {
        name = n;
        age = a;
    }

    // Method to display student details
    void display() const {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    // Create a dynamic object of Student
    Student* stuPtr = new Student;

    // Set student details using pointer
    stuPtr->setDetails("Alice", 20);

    // Display student details using pointer
    cout << "Student Details:" << endl;
    stuPtr->display();

    // Deallocate memory
    delete stuPtr;

    return 0;
}
