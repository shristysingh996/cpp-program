#include <iostream>
using namespace std;

// Base class Appliance
class Appliance {
protected:
    string brand;

public:
    // Constructor to initialize brand
    Appliance(string b) : brand(b) {}

    // Virtual function to display functionality (polymorphic)
    virtual void displayFunctionality() const {
        cout << "This is an appliance from the brand: " << brand << endl;
    }

    // Virtual destructor
    virtual ~Appliance() {}
};

// Derived class WashingMachine
class WashingMachine : public Appliance {
public:
    // Constructor to initialize brand using base class constructor
    WashingMachine(string b) : Appliance(b) {}

    // Override displayFunctionality to display WashingMachine specific functionality
    void displayFunctionality() const override {
        cout << "Washing Machine - Functionality: Washes clothes with different modes." << endl;
    }
};

// Derived class Refrigerator
class Refrigerator : public Appliance {
public:
    // Constructor to initialize brand using base class constructor
    Refrigerator(string b) : Appliance(b) {}

    // Override displayFunctionality to display Refrigerator specific functionality
    void displayFunctionality() const override {
        cout << "Refrigerator - Functionality: Keeps food and drinks cool and fresh." << endl;
    }
};

// Derived class Microwave
class Microwave : public Appliance {
public:
    // Constructor to initialize brand using base class constructor
    Microwave(string b) : Appliance(b) {}

    // Override displayFunctionality to display Microwave specific functionality
    void displayFunctionality() const override {
        cout << "Microwave - Functionality: Heats and cooks food quickly using microwaves." << endl;
    }
};

int main() {
    // Create objects of derived classes
    WashingMachine wm("Samsung");
    Refrigerator fridge("LG");
    Microwave microwave("Panasonic");

    // Create pointers to base class Appliance
    Appliance* appliance1 = &wm;
    Appliance* appliance2 = &fridge;
    Appliance* appliance3 = &microwave;

    // Demonstrate polymorphism: Call displayFunctionality on base class pointers
    cout << "Appliance 1: ";
    appliance1->displayFunctionality();  // This will call WashingMachine's displayFunctionality()

    cout << "Appliance 2: ";
    appliance2->displayFunctionality();  // This will call Refrigerator's displayFunctionality()

    cout << "Appliance 3: ";
    appliance3->displayFunctionality();  // This will call Microwave's displayFunctionality()

    return 0;
}
