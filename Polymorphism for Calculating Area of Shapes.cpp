#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area (to be overridden in derived classes)
    virtual double area() const = 0; // Pure virtual function makes Shape an abstract class
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Override the area function for Circle
    double area() const override {
        return M_PI * radius * radius; // Area of a circle: πr^2
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the area function for Rectangle
    double area() const override {
        return length * width; // Area of a rectangle: length * width
    }
};

int main() {
    // Create objects of Circle and Rectangle
    Circle circle(5.0);           // Circle with radius 5.0
    Rectangle rectangle(4.0, 6.0); // Rectangle with length 4.0 and width 6.0

    // Create a pointer to Shape and use polymorphism to calculate areas
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    // Demonstrating polymorphism
    cout << "Area of Circle: " << shape1->area() << endl; // Calls Circle's area function
    cout << "Area of Rectangle: " << shape2->area() << endl; // Calls Rectangle's area function

    return 0;
}
