#include <iostream>
#include <fstream>  // For file handling (ofstream)
#include <string>

int main() {
    std::string userInput;
    
    // Open the file for writing
    std::ofstream outputFile("output.txt");

    // Check if the file is opened successfully
    if (!outputFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    std::cout << "Enter some text (type 'exit' to stop):" << std::endl;

    // Continuously take user input until 'exit' is typed
    while (true) {
        std::getline(std::cin, userInput);  // Read a line of user input
        
        if (userInput == "exit") {
            break;  // Exit the loop if 'exit' is typed
        }
        
        outputFile << userInput << std::endl;  // Write the input to the file
    }

    std::cout << "Data has been written to 'output.txt'" << std::endl;

    outputFile.close();  // Close the file after writing

    return 0;
}
