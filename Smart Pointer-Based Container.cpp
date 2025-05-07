#include <iostream>
#include <memory>
#include <vector>

using namespace std;

// Template class for the container
template <typename T>
class SmartContainer {
private:
    vector<unique_ptr<T>> container;

public:
    // Function to add an element to the container
    void add(T* item) {
        container.push_back(make_unique<T>(*item));  // Add a unique_ptr to the container
    }

    // Function to access an element by index
    T* get(size_t index) {
        if (index < container.size()) {
            return container[index].get();  // Return raw pointer to the object
        }
        return nullptr;
    }

    // Function to remove the last element in the container
    void remove() {
        if (!container.empty()) {
            container.pop_back();  // Unique pointer will automatically free memory when popped
        }
    }

    // Function to display all elements in the container
    void display() const {
        for (const auto& item : container) {
            cout << *item << " ";  // Dereference unique_ptr to get the object
        }
        cout << endl;
    }

    // Function to get the size of the container
    size_t size() const {
        return container.size();
    }
};

// Sample class to test the container
class Point {
public:
    int x, y;

    Point(int x_val, int y_val) : x(x_val), y(y_val) {}

    // Overload the << operator for easy printing
    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    try {
        // Create a SmartContainer to hold Point objects
        SmartContainer<Point> points;

        // Add some points to the container
        points.add(new Point(1, 2));
        points.add(new Point(3, 4));
        points.add(new Point(5, 6));

        // Display the points in the container
        cout << "Points in the container: ";
        points.display();  // Output: (1, 2) (3, 4) (5, 6)

        // Access and modify an element
        Point* p = points.get(1);  // Get the second point
        if (p) {
            p->x = 10;  // Modify the x value of the second point
        }

        // Display the points after modification
        cout << "Points after modification: ";
        points.display();  // Output: (1, 2) (10, 4) (5, 6)

        // Remove the last point from the container
        points.remove();

        // Display the points after removal
        cout << "Points after removal: ";
        points.display();  // Output: (1, 2) (10, 4)

        // Size of the container
        cout << "Size of container: " << points.size() << endl;  // Output: 2

    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
