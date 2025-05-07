#include <iostream>
using namespace std;

// Define the Book class
class Book {
private:
    string title;
    string author;
    float price;

public:
    // Parameterized constructor
    Book(string t, string a, float p) : title(t), author(a), price(p) {}

    // Method to display book details
    void display() const {
        cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
    }
};

int main() {
    int n;

    // Get the number of books
    cout << "Enter the number of books: ";
    cin >> n;

    // Dynamically allocate an array of Book objects
    Book* books = new Book[n] {
        Book("The Great Gatsby", "F. Scott Fitzgerald", 10.99),
        Book("1984", "George Orwell", 8.99),
        Book("To Kill a Mockingbird", "Harper Lee", 12.99)
    };

    // Display details of all books using pointer to array of objects
    cout << "\nBook details:\n";
    for (int i = 0; i < n; ++i) {
        books[i].display(); // Access each book object using the pointer
    }

    // Deallocate memory
    delete[] books;

    return 0;
}

