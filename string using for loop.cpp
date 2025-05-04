#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);  // Accept input including spaces

    for (int i = 0; i < str.length(); ++i) {
        char ch = tolower(str[i]);  // Convert to lowercase for easy comparison

        if (isalpha(ch)) {  // Check if character is an alphabet letter
            if (ch == 'a' || ch == 'e' || ch == '
