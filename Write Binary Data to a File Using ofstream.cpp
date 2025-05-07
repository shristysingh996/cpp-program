#include <iostream>
#include <fstream>  // For file handling (ofstream)
#include <vector>

int main() {
    // Create some binary data (a sequence of bytes)
    std::vector<char> binaryData = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};

    // Open the file in binary mode for writing
    std::ofstream outputFile("example.bin", std::ios::binary);

    // Check if the file was opened successfully
    if (!outputFile) {
        std::cerr << "Error: Could not open the file for writing!" << std::endl;
        return 1;
    }

    // Write the binary data to the file
    outputFile.write(binaryData.data(), binaryData.size());

    std::cout << "Binary data has been written to 'example.bin'" << std::endl;

    outputFile.close();  // Close the file after writing

    return 0;
}
