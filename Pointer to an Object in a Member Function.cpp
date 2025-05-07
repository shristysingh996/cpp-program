#include <iostream>
using namespace std;

// Define the Person class
class Person {
private:
    string name;

public:
    // Constructor to initialize name
    Person(string n) : name(n) {}

    // Method to display the name
    void display() const {
        cout << "Name: " << name << endl;
    }

    // Method to update the name using a pointer to the object
    void updateName(Person* ptr, const string& newName) {
        ptr->name = newName; // Update the name using pointer
    }
};

int main() {
    // Create an object of Person
    Person person("John");

    // Display the current name
    cout << "Before update:\n";
    person.display();

    // Create a pointer to the Person object
    Person* personPtr = &person;

    // Update the name using the pointer in the class member function
    person.updateName(personPtr, "Alice");

    // Display the updated name
    cout << "\nAfter update:\n";
    person.display();

    return 0;
}
