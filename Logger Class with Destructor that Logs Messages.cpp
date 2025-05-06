#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Logger {
private:
    ofstream logFile;  // ofstream object for writing to the log file
    string filename;   // Name of the log file

public:
    // Constructor to open the log file and initialize the filename
    Logger(const string& fileName) {
        filename = fileName;
        logFile.open(filename, ios::app);  // Open file in append mode

        if (logFile.is_open()) {
            logFile << "Logger initialized.\n";  // Log the initialization message
            cout << "Logger initialized and file opened: " << filename << endl;
        } else {
            cerr << "Error opening the log file!" << endl;
        }
    }

    // Method to log a message to the file
    void logMessage(const string& message) {
        if (logFile.is_open()) {
            logFile << message << endl;  // Write the message to the log file
            cout << "Logged message: " << message << endl;
        } else {
            cerr << "Log file is not open!" << endl;
        }
    }

    // Destructor that logs a message when the object is destroyed
    ~Logger() {
        if (logFile.is_open()) {
            logFile << "Logger destroyed.\n";  // Log the destruction message
            cout << "Logger destroyed and file closed: " << filename << endl;
            logFile.close();  // Close the file
        }
    }
};

int main() {
    // Create a Logger object to open "logfile.txt"
    Logger logger("logfile.txt");

    // Log some messages
    logger.logMessage("This is the first log entry.");
    logger.logMessage("Second log entry.");
    logger.logMessage("Logging some more information.");

    // The file will be closed and the log message will be written when the object goes out of scope
    return 0;
}
