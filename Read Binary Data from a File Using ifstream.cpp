#include <iostream>
#include <fstream>  // For file handling (ifstream)
#include <vector>

int main() {
    // Open the file in binary mode
    std::ifstream inputFile("example.bin", std::ios::binary);

    // Check if the file was opened successfully
    if (!inputFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    // Read the file's contents into a vector
    std::vector<char> buffer((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());

    // Display the contents of the binary file
    std::cout << "Contents of the binary file (as byte values):\n";
    for (size_t i = 0; i < buffer.size(); ++i) {
        std::cout << "Byte " << i << ": " << static_cast<int>(buffer[i]) << std::endl;
    }

    inputFile.close();  // Close the file after reading
    return 0;
}
