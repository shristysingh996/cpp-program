#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member to count the number of objects

public:
    // Constructor: increments the count each time an object is created
    Counter() {
        count++;
    }

    // Static method to get the current count of objects
    static int getCount() {
        return count;
    }
};

// Initialize the static member outside the class
int Counter::count = 0;

int main() {
    // Creating objects of the Counter class
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Displaying the number of objects created
    cout << "Number of objects created: " << Counter::getCount() << endl;

    return 0;
}
