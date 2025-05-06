#include <iostream>
#include <string>
using namespace std;

// Class definition
class Library {
private:
    // Private member - only accessible within this class
    string bookName;

protected:
    // Protected member - accessible within this class and derived classes
    string libraryName;

public:
    // Public member - accessible anywhere
    int totalBooks;

    // Constructor to initialize the library details
    Library(string libName, string bName, int total)
        : libraryName(libName), bookName(bName), totalBooks(total) {}

    // Public method to display library details
    void displayLibraryDetails() {
        cout << "Library Name: " << libraryName << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Total Books: " << totalBooks << endl;
    }

    // Public method to set private book name
    void setBookName(string bName) {
        bookName = bName;
    }

    // Public method to get private book name
    string getBookName() {
        return bookName;
    }
};

// Derived class demonstrating access to protected members
class ExtendedLibrary : public Library {
public:
    ExtendedLibrary(string libName, string bName, int total)
        : Library(libName, bName, total) {}

    // Method to display library details from the derived class
    void displayExtendedDetails() {
        cout << "Library Name (from Derived): " << libraryName << endl; // Accessible from derived class
        cout << "Total Books: " << totalBooks << endl; // Accessible since it's public
    }
};

int main() {
    // Creating an object of the Library class
    Library lib("Central Library", "C++ Programming", 5000);

    // Accessing public members directly
    cout << "Total Books: " << lib.totalBooks << endl;  // Accessing public member
    lib.displayLibraryDetails();  // Accessing public method

    // Accessing private member indirectly through getter
    cout << "Private Book Name (via getter): " << lib.getBookName() << endl; // Accessing private member via public method

    // Modifying private member using setter
    lib.setBookName("Advanced C++");
    cout << "Updated Private Book Name (via getter): " << lib.getBookName() << endl;

    // Creating an object of the ExtendedLibrary class to show inheritance access
    ExtendedLibrary extLib("University Library", "Data Structures", 3000);
    extLib.displayExtendedDetails();  // Derived class accessing protected and public members

    return 0;
}
