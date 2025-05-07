#include <iostream>
#include <fstream>  // For file handling (ifstream)
#include <string>

int main() {
    const std::string filename = "example_file.txt";

    // Create and write some sample data to the file using ofstream
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error: Could not create or open the file for writing!" << std::endl;
        return 1;
    }

    // Write data to the file
    outFile << "Hello, this is the first line of the file.\n";
    outFile << "This is the second line.\n";
    outFile << "Here is the third line.\n";
    outFile.close();

    // Now open the file for reading using ifstream
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error: Could not open the file for reading!" << std::endl;
        return 1;
    }

    // Read the first line from the file and display the file pointer position
    std::string line;
    std::getline(inFile, line);
    std::cout << "Read line: " << line << std::endl;

    // Use tellg to print the current position of the file pointer
    std::cout << "File pointer position after reading the first line: " << inFile.tellg() << std::endl;

    // Use seekg to move the pointer back to the beginning of the file
    inFile.seekg(0, std::ios::beg);
    std::cout << "Moved the file pointer to the beginning." << std::endl;

    // Read the first line again
    std::getline(inFile, line);
    std::cout << "Read line after seeking to the beginning: " << line << std::endl;

    // Move the pointer to the beginning of the second line
    inFile.seekg(10, std::ios::beg);  // Moves the pointer to the 10th byte from the beginning
    std::getline(inFile, line);
    std::cout << "Read line after seeking to the 10th byte: " << line << std::endl;

    // Use tellg again to show the new file pointer position
    std::cout << "File pointer position after seeking to the 10th byte: " << inFile.tellg() << std::endl;

    // Close the file
    inFile.close();

    return 0;
}
