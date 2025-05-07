#include <iostream>
#include <string>
using namespace std;

// Base class Media
class Media {
protected:
    string title;
    double price;

public:
    // Constructor to initialize title and price
    Media(string t, double p) : title(t), price(p) {}

    // Virtual function to display information (polymorphic function)
    virtual void displayInfo() const {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }

    // Virtual destructor
    virtual ~Media() {}
};

// Derived class Book
class Book : public Media {
private:
    int pages;

public:
    // Constructor to initialize title, price, and number of pages
    Book(string t, double p, int pg) : Media(t, p), pages(pg) {}

    // Override displayInfo to display Book specific information
    void displayInfo() const override {
        cout << "Book - Title: " << title << ", Price: $" << price << ", Pages: " << pages << endl;
    }
};

// Derived class DVD
class DVD : public Media {
private:
    int duration; // Duration in minutes

public:
    // Constructor to initialize title, price, and duration
    DVD(string t, double p, int dur) : Media(t, p), duration(dur) {}

    // Override displayInfo to display DVD specific information
    void displayInfo() const override {
        cout << "DVD - Title: " << title << ", Price: $" << price << ", Duration: " << duration << " minutes" << endl;
    }
};

int main() {
    // Create objects of derived classes
    Book book("C++ Programming", 29.99, 500);  // Book with 500 pages
    DVD dvd("Inception", 19.99, 148);          // DVD with duration of 148 minutes

    // Create pointers to base class Media
    Media* media1 = &book;
    Media* media2 = &dvd;

    // Demonstrate polymorphism by calling displayInfo via base class pointers
    cout << "Media 1 Info: ";
    media1->displayInfo();  // This will call Book's displayInfo()

    cout << "Media 2 Info: ";
    media2->displayInfo();  // This will call DVD's displayInfo()

    return 0;
}
