#include <iostream>
using namespace std;

// Abstract base class Account
class Account {
protected:
    double balance;

public:
    // Constructor to initialize balance
    Account(double b) : balance(b) {}

    // Pure virtual function to calculate interest (must be implemented by derived classes)
    virtual double calculateInterest() const = 0;

    // Virtual destructor
    virtual ~Account() {}
};

// Derived class SavingsAccount
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    // Constructor to initialize balance and interest rate
    SavingsAccount(double b, double r) : Account(b), interestRate(r) {}

    // Override calculateInterest to calculate interest for SavingsAccount
    double calculateInterest() const override {
        return balance * interestRate / 100;  // Interest = balance * rate / 100
    }
};

// Derived class CurrentAccount
class CurrentAccount : public Account {
public:
    // Constructor to initialize balance
    CurrentAccount(double b) : Account(b) {}

    // Override calculateInterest for CurrentAccount (no interest)
    double calculateInterest() const override {
        return 0;  // No interest for CurrentAccount
    }
};

int main() {
    // Create objects of derived classes
    SavingsAccount savings(1000, 5);  // SavingsAccount with 1000 balance and 5% interest rate
    CurrentAccount current(1500);     // CurrentAccount with 1500 balance (no interest)

    // Create pointers of type Account (base class)
    Account* account1 = &savings;
    Account* account2 = &current;

    // Demonstrate polymorphism: Call calculateInterest on base class pointers
    cout << "Interest for Savings Account: " << account1->calculateInterest() << endl;
    cout << "Interest for Current Account: " << account2->calculateInterest() << endl;

    return 0;
}
