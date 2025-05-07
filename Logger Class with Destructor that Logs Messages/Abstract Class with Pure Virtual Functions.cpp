#include <iostream>
using namespace std;

// Abstract class Vehicle with a pure virtual function
class Vehicle {
public:
    // Pure virtual function to start the vehicle (abstract function)
    virtual void start() = 0;

    // Virtual destructor
    virtual ~Vehicle() {}
};

// Derived class Car
class Car : public Vehicle {
public:
    // Override the pure virtual function for Car
    void start() override {
        cout << "Car is starting..." << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    // Override the pure virtual function for Bike
    void start() override {
        cout << "Bike is starting..." << endl;
    }
};

int main() {
    // Create objects of derived classes
    Car car;
    Bike bike;

    // Create pointers to Vehicle (abstract class) and point to derived objects
    Vehicle* vehicle1 = &car;
    Vehicle* vehicle2 = &bike;

    // Call start() through the base class pointer
    vehicle1->start();  // Calls Car's start method
    vehicle2->start();  // Calls Bike's start method

    return 0;
}
