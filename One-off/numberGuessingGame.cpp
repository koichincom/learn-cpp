#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int addNumbers(int, int);

int main(){

    srand(static_cast<unsigned int>(time(0)));
    int targetNumber = rand() % 100 + 1; // a random number from 1 to 100

    // definitions
    int userGuess = 0;
    int attempts = 0;
    std::vector<int> guesses;
    int i = 0;

    // starting point
    std::cout << "Guess the random number from 1 to 100.\n";

    // a while Loop until the user get the targetNumber
    while (true) {
        std::cout << "Enter the number: ";
        std::cin >> userGuess;
        guesses.push_back(userGuess);
        attempts++;

        if (userGuess > targetNumber) {
            std::cout << "The number is smaller than that.\n";
        } else if (userGuess < targetNumber) {
            std::cout << "The number is bigger than that.\n";
        } else {
            std::cout << "Correct!\n";
            break;
        }
    }

    // cout attempts
    std::cout << "You took " << attempts << " times to get the right number.\n";

    // numbers the user attempted
    std::cout << "The numbers you tried are  ";
    for (i = 0; i < guesses.size(); ++i) {
        std::cout << guesses.at(i) << ", ";
    }

    std::cout << "\n";

    // attempts + targetNumber
    std::cout << "The sum of attempts and right answer is: " << addNumbers(attempts, targetNumber) << '\n';
}

// attempts + targetNumber
int addNumbers (int attempts, int targetNumber) {
    return attempts + targetNumber;
}