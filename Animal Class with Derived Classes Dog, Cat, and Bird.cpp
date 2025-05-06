#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    // Pure virtual function (makes Animal an abstract class)
    virtual void speak() const = 0;
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override the speak function
    void speak() const override {
        cout << "Woof! Woof!" << endl;  // Sound a dog makes
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override the speak function
    void speak() const override {
        cout << "Meow! Meow!" << endl;  // Sound a cat makes
    }
};

// Derived class Bird
class Bird : public Animal {
public:
    // Override the speak function
    void speak() const override {
        cout << "Tweet! Tweet!" << endl;  // Sound a bird makes
    }
};

int main() {
    // Create objects of derived classes
    Dog d;
    Cat c;
    Bird b;

    // Create an array of Animal pointers
    Animal* animals[3];
    animals[0] = &d;
    animals[1] = &c;
    animals[2] = &b;

    // Loop through the animals array and call speak on each animal
    for (int i = 0; i < 3; ++i) {
        animals[i]->speak();  // Call the speak method (polymorphism)
    }

    return 0;
}
