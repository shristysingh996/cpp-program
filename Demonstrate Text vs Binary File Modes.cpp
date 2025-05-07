#include <iostream>
#include <fstream>
#include <string>

int main() {
    const std::string textFilename = "text_mode.txt";
    const std::string binaryFilename = "binary_mode.dat";

    // Data to write
    std::string data = "Hello, World!\nThis is a text file.\n";

    // --- Writing and Reading in Text Mode ---
    std::ofstream outTextFile(textFilename, std::ios::out);  // Open in text mode (default)
    if (!outTextFile) {
        std::cerr << "Error: Could not open file for writing in text mode!" << std::endl;
        return 1;
    }

    outTextFile << data;  // Write the string (text mode)
    outTextFile.close();  // Close after writing
    std::cout << "Data written in text mode." << std::endl;

    // Now let's read from the file in text mode
    std::ifstream inTextFile(textFilename, std::ios::in);  // Open in text mode (default)
    if (!inTextFile) {
        std::cerr << "Error: Could not open file for reading in text mode!" << std::endl;
        return 1;
    }

    std::cout << "\nReading from text file:\n";
    std::string line;
    while (std::getline(inTextFile, line)) {
        std::cout << line << std::endl;
    }
    inTextFile.close();  // Close after reading

    // --- Writing and Reading in Binary Mode ---
    std::ofstream outBinaryFile(binaryFilename, std::ios::out | std::ios::binary);  // Open in binary mode
    if (!outBinaryFile) {
        std::cerr << "Error: Could not open file for writing in binary mode!" << std::endl;
        return 1;
    }

    // Write data to the file in binary mode
    outBinaryFile.write(reinterpret_cast<const char*>(data.c_str()), data.size());
    outBinaryFile.close();  // Close after writing
    std::cout << "\nData written in binary mode." << std::endl;

    // Now let's read from the file in binary mode
    std::ifstream inBinaryFile(binaryFilename, std::ios::in | std::ios::binary);  // Open in binary mode
    if (!inBinaryFile) {
        std::cerr << "Error: Could not open file for reading in binary mode!" << std::endl;
        return 1;
    }

    std::cout << "\nReading from binary file:\n";
    char buffer[1024];  // Buffer to read data into
    inBinaryFile.read(buffer, data.size());  // Read the data into buffer
    std::cout << buffer << std::endl;
    inBinaryFile.close();  // Close after reading

    return 0;
}
