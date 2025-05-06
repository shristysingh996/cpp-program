#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;   // Private attribute for the book's title
    string author;  // Private attribute for the book's author
    double price;   // Private attribute for the book's price

public:
    // Parameterized constructor to initialize book details
    Book(string bookTitle, string bookAuthor, double bookPrice) {
        title = bookTitle;
        author = bookAuthor;
    }

    // Method to display book details
    void displayBookDetails() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    // Creating an object of Book with title, author, and price
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 10.99);

    // Displaying the book details
    book1.displayBookDetails();

    return 0;
}
