#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler {
private:
    fstream file;  // fstream object to handle file operations
    string filename;  // Stores the filename

public:
    // Constructor to initialize the filename and open the file
    FileHandler(string fileName) {
        filename = fileName;
        file.open(filename, ios::out | ios::app);  // Open file for writing (append mode)
        
        if (!file) {
            cerr << "Error opening the file!" << endl;
        } else {
            cout << "File opened successfully: " << filename << endl;
        }
    }

    // Method to write content to the file
    void writeToFile(const string &content) {
        if (file) {
            file << content << endl;
            cout << "Content written to file." << endl;
        } else {
            cerr << "File is not open for writing!" << endl;
        }
    }

    // Destructor to close the file when the object is destroyed
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed successfully: " << filename << endl;
        }
    }
};

int main() {
    // Creating a FileHandler object to open a file named "example.txt"
    FileHandler fileHandler("example.txt");

    // Writing content to the file
    fileHandler.writeToFile("This is a test content.");
    fileHandler.writeToFile("Writing some more text to the file.");

    // File will be automatically closed when the object goes out of scope
    return 0;
}
