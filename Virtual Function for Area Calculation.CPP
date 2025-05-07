#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function to calculate area
    virtual void area() const {
        cout << "Area of shape is undefined." << endl;
    }

    // Virtual destructor for safety
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void area() const override {
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() const override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void area() const override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

// Example usage
int main() {
    Shape* shape;

    shape = new Circle(5.0);
    shape->area();
    delete shape;

    shape = new Rectangle(4.0, 6.0);
    shape->area();
    delete shape;

    shape = new Triangle(3.0, 7.0);
    shape->area();
    delete shape;

    return 0;
}
