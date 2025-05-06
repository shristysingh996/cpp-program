#include <iostream>
using namespace std;

class Circle {
private:
    double radius; // Radius of the circle

public:
    // Constructor to initialize the radius of the circle
    Circle(double r = 1.0) : radius(r) {}

    // Getter method to access the radius of the circle
    double getRadius() const { return radius; }

    // Friend function to calculate the area of the circle
    friend double calculateArea(const Circle& c);
};

// Friend function definition
double calculateArea(const Circle& c) {
    // Calculate the area of the circle using the formula: π * r^2
    const double pi = 3.14159;
    return pi * c.radius * c.radius;
}

int main() {
    // Create a Circle object
    Circle c(5.0);  // Circle with radius 5

    // Calculate and display the area using the friend function
    double area = calculateArea(c);
    cout << "The area of the circle with radius " << c.getRadius() << " is: " << area << endl;

    return 0;
}
