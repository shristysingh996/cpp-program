#include <iostream>
using namespace std;

// Define the Box class
class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize dimensions
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // Method to return the current object using the 'this' pointer
    Box& getSelf() {
        return *this;  // Dereference 'this' to return the current object
    }

    // Method to display box dimensions
    void display() const {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Create a Box object
    Box box1(5.0, 3.0, 2.0);

    // Display initial dimensions
    cout << "Before update:\n";
    box1.display();

    // Update dimensions using the getSelf() method
    box1.getSelf() = Box(7.0, 4.0, 3.0);  // Return the object and assign new dimensions

    // Display updated dimensions
    cout << "\nAfter update:\n";
    box1.display();

    return 0;
}
