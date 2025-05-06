#include <iostream>
#include <string>
using namespace std;

class Game {
private:
    string playerName;
    int score;

public:
    // Constructor
    Game(const string& name) {
        playerName = name;
        score = 0;
        cout << "Game started for player: " << playerName << endl;
    }

    // Player actions
    void run() {
        cout << playerName << " is running... +10 points!\n";
        score += 10;
    }

    void jump() {
        cout << playerName << " jumped over an obstacle! +15 points!\n";
        score += 15;
    }

    void collectItem(const string& item) {
        cout << playerName << " collected a " << item << "! +20 points!\n";
        score += 20;
    }

    // Display current score
    void displayScore() const {
        cout << "Current score for " << playerName << ": " << score << " points\n";
    }

    // End game
    void endGame() const {
        cout << "\nGame Over for " << playerName << "! Final Score: " << score << " points\n";
    }
};

// Example usage
int main() {
    Game game("Alex");

    game.run();
    game.jump();
    game.collectItem("coin");
    game.displayScore();

    game.collectItem("gem");
    game.run();

    game.endGame();

    return 0;
}
