
#include <iostream>
#include <cstdlib>
#include <ctime>

class GuessingGame {
private:
    int secretNumber;
    int attempts;
    
public:
    GuessingGame() {
        srand(time(0));
        secretNumber = rand() % 100 + 1;
        attempts = 0;
    }
    
    void play() {
        int guess;
        
        std::cout << "I'm thinking of a number between 1 and 100.\n";
        
        do {
            std::cout << "Enter your guess: ";
            std::cin >> guess;
            attempts++;
            
            if (guess < secretNumber) {
                std::cout << "Too low!\n";
            } else if (guess > secretNumber) {
                std::cout << "Too high!\n";
            } else {
                std::cout << "Congratulations! You found it in " 
                         << attempts << " attempts.\n";
            }
        } while (guess != secretNumber);
    }
};

int main() {
    GuessingGame game;
    game.play();
    return 0;
}


// ### **7. Number Guessing Game**
// **Folder:** `07-number-guessing-game/README.md`
// ```markdown
// # 🎯 Number Guessing Game

// An interactive game where the player guesses a randomly generated number.

// ## 🎮 Game Rules
// 1. Computer thinks of a number (1-100)
// 2. Player makes guesses
// 3. Computer provides hints (Too High/Low)
// 4. Player wins when correct guess

// ## 🚀 Usage
// ```bash
// g++ -o guessing_game guessing_game.cpp
// ./guessing_game