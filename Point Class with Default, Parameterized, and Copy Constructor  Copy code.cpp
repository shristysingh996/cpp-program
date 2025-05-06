#include <iostream>
using namespace std;

class Point {
private:
    int x, y;  // Private attributes for x and y coordinates

public:
    // Default constructor (initializes coordinates to 0, 0)
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor to initialize x and y coordinates
    Point(int xCoord, int yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Copy constructor (creates a copy of an existing Point object)
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    // Method to display point coordinates
    void displayPoint() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Creating a Point object using the default constructor
    Point p1;
    p1.displayPoint(); // Output: Point(0, 0)

    // Creating a Point object using the parameterized constructor
    Point p2(5, 7);
    p2.displayPoint(); // Output: Point(5, 7)

    // Creating a Point object using the copy constructor
    Point p3 = p2;
    p3.displayPoint(); // Output: Point(5, 7)

    return 0;
}
