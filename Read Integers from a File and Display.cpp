#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("numbers.txt");  // Open file for reading

    if (!inputFile) {
        std::cerr << "Error: Could not open file 'numbers.txt'!" << std::endl;
        return 1;
    }

    int number;
    std::cout << "The numbers in the file are:\n";
    while (inputFile >> number) {
        std::cout << number << " ";
    }

    std::cout << std::endl;

    inputFile.close();  // Close the file
    return 0;
}
