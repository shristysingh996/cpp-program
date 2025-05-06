#include <iostream>
#include <string>
using namespace std;

// Virtual Base Class
class Animal {
public:
    // Constructor for Animal
    Animal() {
        cout << "Animal created!" << endl;
    }

    // Virtual function to display animal sound
    virtual void makeSound() const {
        cout << "Animal makes a sound!" << endl;
    }

    // Virtual destructor
    virtual ~Animal() {
        cout << "Animal destroyed!" << endl;
    }
};

// Derived class Mammal inheriting from Animal
class Mammal : virtual public Animal {
public:
    // Constructor for Mammal
    Mammal() {
        cout << "Mammal created!" << endl;
    }

    // Overridden makeSound for Mammal
    void makeSound() const override {
        cout << "Mammal makes a sound!" << endl;
    }

    // Destructor for Mammal
    ~Mammal() {
        cout << "Mammal destroyed!" << endl;
    }
};

// Derived class Bird inheriting from Animal
class Bird : virtual public Animal {
public:
    // Constructor for Bird
    Bird() {
        cout << "Bird created!" << endl;
    }

    // Overridden makeSound for Bird
    void makeSound() const override {
        cout << "Bird chirps!" << endl;
    }

    // Destructor for Bird
    ~Bird() {
        cout << "Bird destroyed!" << endl;
    }
};

// Derived class Bat inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    // Constructor for Bat
    Bat() {
        cout << "Bat created!" << endl;
    }

    // Overridden makeSound for Bat
    void makeSound() const override {
        cout << "Bat screeches!" << endl;
    }

    // Destructor for Bat
    ~Bat() {
        cout << "Bat destroyed!" << endl;
    }
};

int main() {
    // Create a Bat object
    Bat bat;
    bat.makeSound();  // Bat's version of makeSound will be called

    return 0;
}
