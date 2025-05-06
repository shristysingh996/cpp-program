#include <iostream>
using namespace std;

class Date {
private:
    int day;   // Day of the date
    int month; // Month of the date
    int year;  // Year of the date

public:
    // Constructor to initialize the date
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    // Method to display the date in format: day/month/year
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }

    // Overload the "==" operator to compare two Date objects
    bool operator==(const Date& other) {
        return (day == other.day && month == other.month && year == other.year);
    }
};

int main() {
    // Create two Date objects
    Date date1(12, 5, 2023);  // Date: 12/5/2023
    Date date2(12, 5, 2023);  // Date: 12/5/2023
    Date date3(25, 12, 2022); // Date: 25/12/2022

    // Compare the dates using the overloaded "==" operator
    if (date1 == date2) {
        cout << "date1 and date2 are the same." << endl;
    } else {
        cout << "date1 and date2 are different." << endl;
    }

    if (date1 == date3) {
        cout << "date1 and date3 are the same." << endl;
    } else {
        cout << "date1 and date3 are different." << endl;
    }

    return 0;
}
