#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
public:
    // Virtual methods for starting and stopping the vehicle
    virtual void start() const {
        cout << "Vehicle is starting." << endl;
    }

    virtual void stop() const {
        cout << "Vehicle is stopping." << endl;
    }

    // Virtual destructor to ensure proper cleanup
    virtual ~Vehicle() {}
};

// Derived class Car
class Car : public Vehicle {
public:
    // Override the start method for Car
    void start() const override {
        cout << "Car is starting. Vroom vroom!" << endl;
    }

    // Override the stop method for Car
    void stop() const override {
        cout << "Car is stopping." << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    // Override the start method for Bike
    void start() const override {
        cout << "Bike is starting. Vroom!" << endl;
    }

    // Override the stop method for Bike
    void stop() const override {
        cout << "Bike is stopping." << endl;
    }
};

int main() {
    // Create objects of derived classes
    Car myCar;
    Bike myBike;

    // Create an array of Vehicle pointers
    Vehicle* vehicles[2];
    vehicles[0] = &myCar;
    vehicles[1] = &myBike;

    // Start and stop each vehicle using polymorphism
    for (int i = 0; i < 2; ++i) {
        vehicles[i]->start();  // Call the start method (polymorphism)
        vehicles[i]->stop();   // Call the stop method (polymorphism)
    }

    return 0;
}
