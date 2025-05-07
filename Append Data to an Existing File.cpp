#include <iostream>
#include <fstream>  // For file handling (ofstream)
#include <string>

int main() {
    std::string newData;

    // Open the file in append mode
    std::ofstream outputFile("example.txt", std::ios::app);

    // Check if the file is opened successfully
    if (!outputFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    // Ask the user for new data to append
    std::cout << "Enter text to append to the file (type 'exit' to stop):" << std::endl;

    // Continuously accept input until 'exit' is typed
    while (true) {
        std::getline(std::cin, newData);  // Read a line of input

        if (newData == "exit") {
            break;  // Stop if user types 'exit'
        }

        outputFile << newData << std::endl;  // Append the input data to the file
    }

    std::cout << "New data has been appended to 'example.txt'" << std::endl;

    outputFile.close();  // Close the file after appending

    return 0;
}
