#include <iostream>
#include <cmath> // For M_PI
using namespace std;

// Base class Shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function to calculate the area
    virtual void display() const = 0; // Pure virtual function to display the shape's details
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // Override the area function
    double area() const override {
        return M_PI * radius * radius;  // Area of a circle: π * r^2
    }

    // Override the display function
    void display() const override {
        cout << "Circle with radius " << radius << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the area function
    double area() const override {
        return length * width;  // Area of rectangle: length * width
    }

    // Override the display function
    void display() const override {
        cout << "Rectangle with length " << length << " and width " << width << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Override the area function
    double area() const override {
        return 0.5 * base * height;  // Area of triangle: 0.5 * base * height
    }

    // Override the display function
    void display() const override {
        cout << "Triangle with base " << base << " and height " << height << endl;
    }
};

int main() {
    // Create objects of derived classes
    Circle c(5.0);  // Circle with radius 5
    Rectangle r(4.0, 6.0);  // Rectangle with length 4 and width 6
    Triangle t(4.0, 3.0);  // Triangle with base 4 and height 3

    // Display details and calculate area of each shape
    Shape* shapes[3];  // Array of shape pointers
    shapes[0] = &c;
    shapes[1] = &r;
    shapes[2] = &t;

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();  // Display shape details
        cout << "Area: " << shapes[i]->area() << endl << endl;  // Display area
    }

    return 0;
}
