#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileCompressor {
public:
    // Compress a file using run-length encoding (RLE)
    void compress(const string& inputFile, const string& outputFile) {
        ifstream in(inputFile);
        ofstream out(outputFile);

        if (!in || !out) {
            cerr << "Error opening file.\n";
            return;
        }

        char currentChar, prevChar = '\0';
        int count = 0;

        while (in.get(currentChar)) {
            if (currentChar == prevChar) {
                count++;
            } else {
                if (count > 0)
                    out << prevChar << count;
                prevChar = currentChar;
                count = 1;
            }
        }

        if (count > 0)
            out << prevChar << count;

        in.close();
        out.close();
        cout << "Compression complete.\n";
    }

    // Decompress a file that was compressed with RLE
    void decompress(const string& inputFile, const string& outputFile) {
        ifstream in(inputFile);
        ofstream out(outputFile);

        if (!in || !out) {
            cerr << "Error opening file.\n";
            return;
        }

        char ch;
        while (in >> ch) {
            int count;
            in >> count;
            for (int i = 0; i < count; i++) {
                out << ch;
            }
        }

        in.close();
        out.close();
        cout << "Decompression complete.\n";
    }
};

// Example usage
int main() {
    FileCompressor compressor;

