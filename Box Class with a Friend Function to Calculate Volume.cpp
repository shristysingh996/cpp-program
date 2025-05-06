#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize dimensions of the box
    Box(double l = 1.0, double w = 1.0, double h = 1.0) : length(l), width(w), height(h) {}

    // Getter methods to access the dimensions of the box
    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }

    // Friend function to calculate the volume of two boxes
    friend double calculateVolume(const Box& box1, const Box& box2);
};

// Friend function definition
double calculateVolume(const Box& box1, const Box& box2) {
    // Calculate the volume of each box
    double volume1 = box1.length * box1.width * box1.height;
    double volume2 = box2.length * box2.width * box2.height;
    
    // Print the volumes
    cout << "Volume of box 1: " << volume1 << endl;
    cout << "Volume of box 2: " << volume2 << endl;
    
    // Return the sum of both volumes
    return volume1 + volume2;
}

int main() {
    // Create two Box objects
    Box box1(3.0, 4.0, 5.0);  // Box 1: 3 x 4 x 5
    Box box2(2.0, 3.0, 6.0);  // Box 2: 2 x 3 x 6
    
    // Calculate and display the volumes using the friend function
    double totalVolume = calculateVolume(box1, box2);
    cout << "Total volume of both boxes: " << totalVolume << endl;

    return 0;
}
