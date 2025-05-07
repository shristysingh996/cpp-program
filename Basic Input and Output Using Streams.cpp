#include <iostream>  // For input and output streams

using namespace std;

int main() {
    // Declare variables to hold the user's input
    string name;
    int age;

    // Ask the user for their name
    cout << "Enter your name: ";
    cin >> name;

    // Ask the user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Output the entered information
    cout << "\nHello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}
