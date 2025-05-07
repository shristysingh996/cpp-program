#include <iostream>
#include <fstream>  // For file handling (ofstream, ifstream, fstream)
#include <string>

int main() {
    const std::string filename = "example_file.txt";

    // Create and open a file for writing using ofstream (output file stream)
    std::ofstream outFile(filename);
    
    if (!outFile) {  // Check if the file was successfully opened
        std::cerr << "Error: Could not create or open the file for writing!" << std::endl;
        return 1;
    }

    // Write data to the file
    outFile << "This is a test file created using ofstream.\n";
    outFile << "We are writing some data to the file using file streams.\n";

    // Close the file after writing
    outFile.close();
    std::cout << "File has been created and data written to it." << std::endl;

    // Open the file for reading using ifstream (input file stream)
    std::ifstream inFile(filename);

    if (!inFile) {  // Check if the file was successfully opened for reading
        std::cerr << "Error: Could not open the file for reading!" << std::endl;
        return 1;
    }

    std::string line;
    std::cout << "Contents of the file are:\n";
    
    // Read the file line by line and print to the console
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file after reading
    inFile.close();
    std::cout << "File has been read and closed." << std::endl;

    // Open the file for both reading and writing using fstream
    std::fstream fileStream(filename, std::ios::in | std::ios::out);

    if (!fileStream) {  // Check if the file was successfully opened
        std::cerr << "Error: Could not open the file for both reading and writing!" << std::endl;
        return 1;
    }

    // Move the file pointer to the end and append new data
    fileStream.seekp(0, std::ios::end);
    fileStream << "\nThis is additional data appended to the file using fstream.";

    // Close the file after modifying it
    fileStream.close();
    std::cout << "Additional data has been appended to the file." << std::endl;

    return 0;
}
