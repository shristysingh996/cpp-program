#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    // Private data members
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    // Constructor to initialize an Account object
    Account(string name, string accNum, double initialBalance) 
        : accountHolderName(name), accountNumber(accNum), balance(initialBalance) {}

    // Public method to access the account holder's name
    string getAccountHolderName() const {
        return accountHolderName;
    }

    // Public method to modify the account holder's name
    void setAccountHolderName(string name) {
        accountHolderName = name;
    }

    // Public method to access the account number
    string getAccountNumber() const {
        return accountNumber;
    }

    // Public method to modify the account number
    void setAccountNumber(string accNum) {
        accountNumber = accNum;
    }

    // Public method to access the balance
    double getBalance() const {
        return balance;
    }

    // Public method to modify the balance (e.g., deposit or withdrawal)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }

    // Public method to display account details
    void displayAccountDetails() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create an Account object
    Account acc("John Doe", "A12345", 1000.0);

    // Display initial account details
    acc.displayAccountDetails();

    // Modify the account holder's name
    acc.setAccountHolderName("Jane Doe");
    cout << "Updated Account Holder Name: " << acc.getAccountHolderName() << endl;

    // Deposit money into the account
    acc.deposit(500.0);

    // Withdraw money from the account
    acc.withdraw(200.0);

    // Display updated account details
    acc.displayAccountDetails();

    return 0;
}
