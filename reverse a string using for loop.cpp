#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);  // To allow spaces in the input

    // Reverse the string using a for loop
    int n = str.length();  // Get the length of the string
    for (int i = 0; i < n / 2; ++i) {
        swap(str[i], str[n - i - 1]);  // Swap characters from both ends
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
