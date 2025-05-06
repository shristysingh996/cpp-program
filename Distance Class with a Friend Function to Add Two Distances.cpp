#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize the distance in feet and inches
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    // Getter methods to access the distance
    int getFeet() const { return feet; }
    int getInches() const { return inches; }

    // Friend function to add two Distance objects
    friend Distance addDistances(const Distance& d1, const Distance& d2);
};

// Friend function definition to add two Distance objects
Distance addDistances(const Distance& d1, const Distance& d2) {
    int totalInches = d1.inches + d2.inches;
    int totalFeet = d1.feet + d2.feet;

    // If total inches exceed 12, convert to feet and inches
    if (totalInches >= 12) {
        totalInches -= 12;
        totalFeet += 1;
    }

    return Distance(totalFeet, totalInches);
}

int main() {
    // Create two Distance objects
    Distance d1(5, 9);  // 5 feet 9 inches
    Distance d2(3, 7);  // 3 feet 7 inches

    // Add the two distances using the friend function
    Distance total = addDistances(d1, d2);

    // Display the result
    cout << "Distance 1: " << d1.getFeet() << " feet " << d1.getInches() << " inches" << endl;
    cout << "Distance 2: " << d2.getFeet() << " feet " << d2.getInches() << " inches" << endl;
    cout << "Total Distance: " << total.getFeet() << " feet " << total.getInches() << " inches" << endl;

    return 0;
}
