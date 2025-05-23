#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int number = std::rand() % 100 + 1;
    int guess, tries = 0;

    std::cout << "🎮 Welcome to the Number Guessing Game!\n";

    do {
        std::cout << "Enter your guess (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > number)
            std::cout << "Too high!\n";
        else if (guess < number)
            std::cout << "Too low!\n";
        else
            std::cout << "🎉 Correct! Guessed in " << tries << " tries.\n";
    } while (guess != number);

    return 0;
}
