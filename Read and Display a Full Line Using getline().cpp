#include <iostream>
#include <string>  // For using std::getline and std::string

int main() {
    std::string line;

    std::cout << "Enter a line of text: ";
    std::getline(std::cin, line);  // Read the full line of text from the user

    std::cout << "You entered: " << line << std::endl;  // Display the line

    return 0;
}
