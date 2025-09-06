#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int playAgain = 1;

    while (playAgain == 1) {
        int numberToGuess = rand() % 100 + 1; // Generate random number between 1 and 100
        int numberOfTries = 0;
        int guess;

        cout << "Welcome to the number guessing game!\n";
        cout << "I'm thinking of a number between 1 and 100.\n";

        while (true) {
            std::cout << "Enter your guess: ";
            if (!(cin >> guess)) {
                cout << "Invalid input. Please enter a number.\n";
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            numberOfTries++;

            if (guess < numberToGuess) {
                cout << "Too low!\n";
            } else if (guess > numberToGuess) {
                cout << "Too high!\n";
            } else {
                cout << "Congratulations! You found the number in " << numberOfTries << " tries.\n";
                break;
            }
        }

        cout << "Would you like to play again? (1 for yes, 0 for no): ";
        cin >> playAgain;

        while (playAgain != 0 && playAgain != 1) {
            cout << "Invalid input. Please enter 1 for yes or 0 for no: ";
            cin >> playAgain;
        }
    }

    return 0;
} 
