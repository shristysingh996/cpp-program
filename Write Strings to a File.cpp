#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ofstream outputFile("output.txt");  // Open file for writing

    if (!outputFile) {
        std::cerr << "Error: Could not open file 'output.txt' for writing!" << std::endl;
        return 1;
    }

    // List of strings to write
    std::vector<std::string> lines = {
        "Hello, world!",
        "This is a test file.",
        "Each string is written on a new line.",
        "C++ file I/O is straightforward!"
    };

    // Write each string to the file
    for (const std::string& line : lines) {
        outputFile << line << std::endl;
    }

    outputFile.close();  // Close the file

    std::cout << "Strings have been written to 'output.txt'." << std::endl;

    return 0;
}
