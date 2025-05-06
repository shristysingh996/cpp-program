#include <iostream>
#include <string>
using namespace std;

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

int main() {
    // Creating an object of the Person class
    Person person;

    // Setting name and age using setter methods
    person.setName("John Doe");
    person.setAge(30);

    // Getting name and age using getter methods
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}
