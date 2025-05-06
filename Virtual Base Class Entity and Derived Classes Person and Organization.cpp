#include <iostream>
#include <string>
using namespace std;

// Virtual base class
class Entity {
public:
    // Virtual function to display details of the entity
    virtual void displayDetails() const = 0; // Pure virtual function, making this class abstract

    // Virtual destructor
    virtual ~Entity() {
        cout << "Entity destroyed." << endl;
    }
};

// Derived class Person from Entity
class Person : virtual public Entity {
protected:
    string name;
    int age;

public:
    // Constructor to initialize Person's name and age
    Person(string n, int a) : name(n), age(a) {}

    // Override the displayDetails function to display Person's details
    void displayDetails() const override {
        cout << "Person Name: " << name << endl;
        cout << "Person Age: " << age << endl;
    }

    ~Person() {
        cout << "Person destroyed." << endl;
    }
};

// Derived class Organization from Entity
class Organization : virtual public Entity {
protected:
    string orgName;
    string location;

public:
    // Constructor to initialize Organization's name and location
    Organization(string n, string loc) : orgName(n), location(loc) {}

    // Override the displayDetails function to display Organization's details
    void displayDetails() const override {
        cout << "Organization Name: " << orgName << endl;
        cout << "Organization Location: " << location << endl;
    }

    ~Organization() {
        cout << "Organization destroyed." << endl;
    }
};

int main() {
    // Create a Person object
    Person person("Alice", 30);
    
    // Create an Organization object
    Organization org("Tech Corp", "New York");

    // Display details of Person and Organization
    cout << "\nPerson Details:\n";
    person.displayDetails();

    cout << "\nOrganization Details:\n";
    org.displayDetails();

    return 0;
}
