#include <iostream>
#include <fstream>  // For file handling (ifstream, ofstream, fstream)
#include <string>

int main() {
    const std::string filename = "example_modes.txt";

    // --- Write Mode (std::ofstream) ---
    // Open the file for writing (this will overwrite the file if it exists)
    std::ofstream outFile(filename, std::ios::out);

    if (!outFile) {
        std::cerr << "Error: Could not open the file for writing!" << std::endl;
        return 1;
    }

    // Write initial data to the file
    outFile << "This is the first line in the file (written in write mode).\n";
    outFile << "This is the second line in the file.\n";
    outFile.close();  // Close the file after writing
    std::cout << "File written in write mode." << std::endl;

    // --- Read Mode (std::ifstream) ---
    // Open the file for reading
    std::ifstream inFile(filename, std::ios::in);

    if (!inFile) {
        std::cerr << "Error: Could not open the file for reading!" << std::endl;
        return 1;
    }

    std::cout << "\nFile contents read in read mode:\n";
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    inFile.close();  // Close the file after reading
    std::cout << "File read in read mode." << std::endl;

    // --- Append Mode (std::ofstream with std::ios::app) ---
    // Open the file in append mode (data will be added at the end of the file)
    std::ofstream appendFile(filename, std::ios::app);

    if (!appendFile) {
        std::cerr << "Error: Could not open the file for appending!" << std::endl;
        return 1;
    }

    // Append new data to the file
    appendFile << "This is a new line appended to the file.\n";
    appendFile << "Another appended line.\n";
    appendFile.close();  // Close the file after appending
    std::cout << "\nNew lines appended to the file in append mode." << std::endl;

    // --- Read Mode Again (std::ifstream) ---
    // Open the file again for reading to show the appended content
    inFile.open(filename, std::ios::in);

    if (!inFile) {
        std::cerr << "Error: Could not open the file for reading!" << std::endl;
        return 1;
    }

    std::cout << "\nFile contents after appending (read mode again):\n";
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    inFile.close();  // Close the file after reading
    std::cout << "File read after appending in read mode." << std::endl;

    return 0;
}
