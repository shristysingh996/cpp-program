#include <iostream>

int main() {
    char ch;

    std::cout << "Enter characters (press Enter to stop): ";

    // Using get() to read characters from the user until Enter is pressed
    while (std::cin.get(ch)) {
        if (ch == '\n') {  // Stop when the user presses Enter
            break;
        }

        // Using put() to output the character
        std::cout.put(ch);
    }

    std::cout << "\nProgram finished." << std::endl;
    return 0;
}
