#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;  // Private attribute for length
    double width;   // Private attribute for width

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Method to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Method to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Method to display rectangle details
    void displayRectangleDetails() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    // Creating an object of Rectangle with length 5 and width 3
    Rectangle rect(5.0, 3.0);

    // Displaying the details of the rectangle
    rect.displayRectangleDetails();

    return 0;
}
