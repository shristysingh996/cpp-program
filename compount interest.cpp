#include <iostream>
#include <cmath>  // for pow()
using namespace std;

// Function to calculate compound interest with default rate and time
double compoundInterest(double principal, double rate = 5.0, int time = 2) {
    // CI = P * (1 + R/100)^T - P
    return principal * pow((1 + rate / 100), time) - principal;
}

int main() {
    double principal, rate;
    int time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest (press enter to use default 5%): ";
    cin.ignore();
    if (cin.peek() == '\n') {
        rate = 5.0;  // use default
        time = 2;
    } else {
        cin >> rate;
        cout << "Enter time in years: ";
        cin >> time;
    }

    double interest = compoundInterest(principal, rate, time);

    cout << "Compound Interest: " << interest << endl;

    return 0;
}
