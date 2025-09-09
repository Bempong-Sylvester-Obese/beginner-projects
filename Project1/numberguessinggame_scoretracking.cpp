#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed random number generator
    int playAgain;
    int wins = 0;
    int losses = 0;

    do {
        int numberToGuess = rand() % 100 + 1; // Generate random number between 1 and 100
        int numberOfTries = 0;
        int guess;

        std::cout << "Welcome to the number guessing game!\n";
        std::cout << "I'm thinking of a number between 1 and 100.\n";
        std::cout << "Current Score - Wins: " << wins << ", Losses: " << losses << "\n";

        while (true) {
            std::cout << "Enter your guess: ";
            while (!(std::cin >> guess)) {
                std::cout << "Invalid input. Please enter a number.\n";
                std::cin.clear();
                std::cin.ignore(10000, '\n');
            }

            numberOfTries++;

            if (guess < numberToGuess) {
                std::cout << "Too low!\n";
            } else if (guess > numberToGuess) {
                std::cout << "Too high!\n";
            } else {
                std::cout << "Congratulations! You found the number in " << numberOfTries << " tries.\n";
                wins++;
                break;
            }
        }

        std::cout << "Would you like to play again? (1 for yes, 0 for no): ";
        std::cin >> playAgain;

        while (playAgain != 0 && playAgain != 1) {
            std::cout << "Invalid input. Please enter 1 for yes or 0 for no: ";
            std::cin >> playAgain;
        }

        if (playAgain == 0) {
            std::cout << "Thanks for playing! Final Score - Wins: " << wins << ", Losses: " << losses << "\n";
        } else {
            losses--; // reset loss count for next round since game wasn't lost
        }
    } while (playAgain == 1);

    if(wins == 0 && losses == 0){
        std::cout << "You didn't play any rounds.\n";
    } else {
        losses += 1; // Count the last game as a loss if user chose not to play again
        std::cout << "Final Score - Wins: " << wins << ", Losses: " << losses << "\n";
    }

    return 0;
}

