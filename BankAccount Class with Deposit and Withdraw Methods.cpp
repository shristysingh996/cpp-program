#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;  // Private attribute for account number
    double balance;     // Private attribute for balance

public:
    // Constructor to initialize account number and balance
    BankAccount(int accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Method to display account details
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount account1(12345, 1000.0); // Account number 12345, initial balance $1000

    // Displaying initial account details
    account1.displayAccountDetails();

    // Depositing money
    account1.deposit(500.0);

    // Withdrawing money
    account1.withdraw(200.0);

    // Displaying updated account details
    account1.displayAccountDetails();

    // Trying an invalid withdrawal
    account1.withdraw(2000.0); // Exceeds balance

    return 0;
}
