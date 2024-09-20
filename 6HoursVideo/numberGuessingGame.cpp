#include <iostream>
#include <string>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries = 0;
    std::string timeOrTimes = " time";


    srand(time(0)); // Set a seed for rand()
    num = (rand() % 10) + 1; // Generate a pseudo-random number from 1 to 10

    // Let the user guess the number while the user gets correct
    do{
        std::cout << "Guess the number 1 to 10: ";
        std::cin >> guess;
        tries++;

        if (guess < 1 || guess > 10) {
            std::cout << "Please enter a number between 1 and 10." << std::endl;
            continue; // Skip the rest of the loop and ask for input again
        }
        
        if (guess > num) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < num) {
            std::cout << "Too low! Try again." << std::endl;
        }

    } while (num != guess);

    // Tried once or more
    if (tries > 1){
        timeOrTimes = " times";
    }

    // Display the info
    std::cout << "Congratulations! You successfully guessed the number!\n";
    std::cout << "The number was " << num << "." << std::endl;
    std::cout << "You tried " << tries << timeOrTimes << " to get the correct number." << std::endl;

    return 0;
}