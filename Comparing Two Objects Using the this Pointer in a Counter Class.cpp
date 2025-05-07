#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor to initialize the value
    Counter(int v) : value(v) {}

    // Member function to compare the current object with another Counter object
    bool isEqualTo(const Counter& other) {
        return this->value == other.value;  // Compare current object with the other object
    }

    // Method to display the value of the Counter
    void display() const {
        cout << "Counter value: " << value << endl;
    }
};

int main() {
    // Create two Counter objects
    Counter counter1(10);
    Counter counter2(10);
    Counter counter3(20);

    // Display the counter values
    cout << "Counter 1: ";
    counter1.display();
    cout << "Counter 2: ";
    counter2.display();
    cout << "Counter 3: ";
    counter3.display();

    // Compare objects using the isEqualTo function
    if (counter1.isEqualTo(counter2)) {
        cout << "Counter 1 and Counter 2 have the same value." << endl;
    } else {
        cout << "Counter 1 and Counter 2 have different values." << endl;
    }

    if (counter1.isEqualTo(counter3)) {
        cout << "Counter 1 and Counter 3 have the same value." << endl;
    } else {
        cout << "Counter 1 and Counter 3 have different values." << endl;
    }

    return 0;
}
