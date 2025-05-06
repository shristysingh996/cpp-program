#include <iostream>
#define PI 3.14159

// Function prototype
double calculateArea(double radius);

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = calculateArea(radius);
    std::cout << "Area of the circle is: " << area << std::endl;

    return 0;
}

// Function definition
double calculateArea(double radius) {
    return PI * radius * radius;
}
