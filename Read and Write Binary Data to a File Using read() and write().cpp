#include <iostream>
#include <fstream>
#include <cstring>

int main() {
    const std::string filename = "binary_data.dat";

    // Data to write (example: an array of integers)
    int data[] = {100, 200, 300, 400, 500};
    size_t dataSize = sizeof(data) / sizeof(data[0]);

    // --- Writing Binary Data to a File ---
    std::ofstream outFile(filename, std::ios::out | std::ios::binary);  // Open file in binary mode
    if (!outFile) {
        std::cerr << "Error: Could not open the file for writing!" << std::endl;
        return 1;
    }

    // Write binary data to the file using write() function
    outFile.write(reinterpret_cast<char*>(data), dataSize * sizeof(int));

    // Close the file after writing
    outFile.close();
    std::cout << "Binary data written to file successfully." << std::endl;

    // --- Reading Binary Data from the File ---
    int readData[dataSize];  // Array to store data read from the file

    std::ifstream inFile(filename, std::ios::in | std::ios::binary);  // Open file in binary mode
    if (!inFile) {
        std::cerr << "Error: Could not open the file for reading!" << std::endl;
        return 1;
    }

    // Read binary data from the file using read() function
    inFile.read(reinterpret_cast<char*>(readData), dataSize * sizeof(int));

    // Close the file after reading
    inFile.close();
    std::cout << "Binary data read from file successfully." << std::endl;

    // --- Display the Data Read from the File ---
    std::cout << "\nData read from file:\n";
    for (size_t i = 0; i < dataSize; ++i) {
        std::cout << "readData[" << i << "] = " << readData[i] << std::endl;
    }

    return 0;
}
