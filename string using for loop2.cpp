#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    unordered_map<char, int> freq;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Count the frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Output the frequency of each character
    cout << "Character frequencies:\n";
    for (auto& pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
