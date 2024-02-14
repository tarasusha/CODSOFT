#include<iostream>  
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main() {
    srand(time(0)); // seed the random number generator

    int secretNumber = rand() % 100 + 1; // generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "Try to guess the secret number between 1 and 100.\n\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts!\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
