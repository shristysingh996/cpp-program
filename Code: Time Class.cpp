#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    // Helper to normalize time values (e.g., 75 seconds = 1 minute 15 seconds)
    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }

        // Handle negatives (for subtraction)
        if (seconds < 0) {
            seconds += 60;
            minutes--;
        }
        if (minutes < 0) {
            minutes += 60;
            hours--;
        }
        if (hours < 0) {
            hours = minutes = seconds = 0;  // Prevent negative time
        }
    }

public:
    // Default constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    // Display time in hh:mm:ss format
    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    // Add two time values
    Time add(const Time& t) const {
        Time result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;
        result.seconds = seconds + t.seconds;
        result.normalize();
        return result;
    }

    // Subtract two time values
    Time subtract(const Time& t) const {
        Time result;
        result.hours = hours - t.hours;
        result.minutes = minutes - t.minutes;
        result.seconds = seconds - t.seconds;
        result.normalize();
        return result;
    }

    // Compare time values: returns -1 if less, 0 if equal, 1 if greater
    int compare(const Time& t) const {
        if (hours < t.hours) return -1;
        if (hours > t.hours) return 1;
        if (minutes < t.minutes) return -1;
        if (minutes > t.minutes) return 1;
        if (seconds < t.seconds) return -1;
        if (seconds > t.seconds) return 1;
        return 0;
    }
};

// Example usage
int main() {
    Time t1(2, 45, 50);
    Time t2(1, 20, 30);

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();

    Time sum = t1.add(t2);
    cout << "\nSum: ";
    sum.display();

    Time diff = t1.subtract(t2);
    cout << "Difference: ";
    diff.display();

    int cmp = t1.compare(t2);
    cout << "Comparison: Time 1 is ";
    if (cmp == -1) cout << "less than";
    else if (cmp == 0) cout << "equal to";
    else cout << "greater than";
    cout << " Time 2\n";

    return 0;
}
