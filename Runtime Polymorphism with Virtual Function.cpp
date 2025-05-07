#include <iostream>
#include <cmath>  // For M_PI constant
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area, to be overridden by derived classes
    virtual double area() const {
        return 0;  // Default implementation (not used, but required for base class)
    }

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Override area function for Circle
    double area() const override {
        return M_PI * radius * radius;  // Area of a circle: πr^2
    }
};

// Derived class Square
class Square : public Shape {
private:
    double side;

public:
    // Constructor to initialize side length
    Square(double s) : side(s) {}

    // Override area function for Square
    double area() const override {
        return side * side;  // Area of a square: side^2
    }
};

int main() {
    // Create objects of derived classes
    Circle circle(5);      // Circle with radius 5
    Square square(4);      // Square with side 4

    // Create pointers of type Shape (base class)
    Shape* shape1 = &circle;
    Shape* shape2 = &square;

    // Demonstrate runtime polymorphism: the correct area() function is called
    cout << "Area of Circle: " << shape1->area() << endl;
    cout << "Area of Square: " << shape2->area() << endl;

    return 0;
}
