#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    // Loop until the user guesses the number correctly
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }

    } while (guess != number);

    return 0;
}
