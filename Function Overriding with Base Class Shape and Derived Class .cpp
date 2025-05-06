#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual double calculateArea() const {
        cout << "Calculating area of the shape (Base Class)" << endl;
        return 0.0; // Default implementation
    }
    
    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Shape() {
        cout << "Shape destroyed" << endl;
    }
};

// Derived class Circle inheriting from Shape
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize the radius of the circle
    Circle(double r) : radius(r) {}

    // Override the calculateArea function to calculate area of the circle
    double calculateArea() const override {
        return M_PI * radius * radius;  // Area of circle = π * r^2
    }

    // Destructor for Circle
    ~Circle() {
        cout << "Circle destroyed" << endl;
    }
};

int main() {
    // Create a base class pointer to derived class object
    Shape* shape1 = new Circle(5.0);

    // Calling overridden function using base class pointer
    cout << "Area of Circle: " << shape1->calculateArea() << endl;

    // Clean up memory
    delete shape1;

    return 0;
}
