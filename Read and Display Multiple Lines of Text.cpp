#include <iostream>
#include <string>  // For string manipulation

using namespace std;

int main() {
    string line;  // Variable to store each line of input

    cout << "Enter multiple lines of text. Type 'exit' to stop.\n";

    // Keep reading lines until the user types "exit"
    while (true) {
        // Read a line of input
        getline(cin, line);

        // Check if the user typed 'exit'
        if (line == "exit") {
            break;
        }

        // Display the entered line
        cout << "You entered: " << line << endl;
    }

    cout << "Program ended." << endl;

    return 0;
}
