#include <iostream>
#include <fstream>  // For file handling (fstream)
#include <string>

int main() {
    const std::string filename = "binary_data.dat";

    // Data to write to the file (array of integers)
    int data[] = {10, 20, 30, 40, 50};
    size_t dataSize = sizeof(data) / sizeof(data[0]); // Calculate the size of the array

    // --- Writing to the file in binary mode ---
    std::ofstream outFile(filename, std::ios::binary);

    if (!outFile) {
        std::cerr << "Error: Could not open the file for writing!" << std::endl;
        return 1;
    }

    // Write the array of integers to the file
    outFile.write(reinterpret_cast<char*>(data), dataSize * sizeof(int));

    // Close the file after writing
    outFile.close();
    std::cout << "Data written to file in binary mode." << std::endl;

    // --- Reading from the file in binary mode ---
    int readData[dataSize];  // Array to store the data read from the file

    std::ifstream inFile(filename, std::ios::binary);

    if (!inFile) {
        std::cerr << "Error: Could not open the file for reading!" << std::endl;
        return 1;
    }

    // Read the data back from the file
    inFile.read(reinterpret_cast<char*>(readData), dataSize * sizeof(int));

    // Close the file after reading
    inFile.close();
    std::cout << "Data read from file in binary mode." << std::endl;

    // --- Display the read data ---
    std::cout << "\nData read from file:" << std::endl;
    for (size_t i = 0; i < dataSize; ++i) {
        std::cout << "readData[" << i << "] = " << readData[i] << std::endl;
    }

    return 0;
}
