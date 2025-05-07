#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main() {
    std::string inputLine;
    std::ofstream outFile("output.txt");

    if (!outFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    std::cout << "Enter lines of text (type 'exit' to finish):\n";

    while (true) {
        std::getline(std::cin, inputLine);

        // Exit condition
        if (inputLine ==
