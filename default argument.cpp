#include <iostream>
using namespace std;

// Function to print a greeting with a default name
void greet(string name = "Guest") {
    cout << "Hello, " << name << "! Welcome!" << endl;
}

int main() {
    string userName;

    cout << "Enter your name (press Enter to skip): ";
    getline(cin, userName);

    if (userName.empty()) {
        greet();  // Calls with default argument
    } else {
        greet(userName);  // Calls with user-provided name
    }

    return 0;
}
