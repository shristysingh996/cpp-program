#include <iostream>
using namespace std;

// Define the Person class
class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Method to set the name
    Person& setName(const string& n) {
        name = n;
        return *this;  // Return the current object (this pointer) to allow chaining
    }

    // Method to set the age
    Person& setAge(int a) {
        age = a;
        return *this;  // Return the current object (this pointer) to allow chaining
    }

    // Method to display the details of the person
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a Person object and chain method calls using the 'this' pointer
    Person person("John", 25);

    // Chain the setName and setAge functions and then display the details
    person.setName("Alice").setAge(30).display();

    return 0;
}
