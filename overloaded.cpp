#include <iostream>
#define PI 3.14159
using namespace std;

// Overloaded function to calculate area of a circle
double area(double radius) {
    return PI * radius * radius;
}

// Overloaded function to calculate area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Overloaded function to calculate area of a triangle
double area(double base, double height, bool isTriangle) {
    if (isTriangle)
        return 0.5 * base * height;
    else
        return base * height;  // fallback for general usage
}

int main() {
    double r, l, w, b, h;

    // Circle
    cout << "Enter radius of the circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;

    // Rectangle
    cout << "\nEnter length and width of the rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << area(l, w) << endl;

    // Triangle
    cout << "\nEnter base and height of the triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << area(b, h, true) << endl;

    return 0;
}
