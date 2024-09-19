#include <iostream>

int getNumberFromUser(int &i, int num){

    int j{};

    // Avoid num less or equal than 0
    do {
        if (j > 0){
            std::cout << "Your input was invalid.\n";
        }
        j++; // How many times the user input

        if (i == 0)
        {
            std::cout << "Please type first number: ";
            std::cin >> num;
        } else {
            std::cout << "Please type second number: ";
            std::cin >> num;
        }
    } while (num <= 0);
    i++; // How many times this function was evoked
    return num;
}

int calculateGCD(int number1, int number2){
    int r{};

    // Euclidean algorithm
    while (number2 > 0){
        r = number1 % number2;
        number1 = number2;
        number2 = r;
    }
    
    return number1;
}

int main(){

    int i{};
    int num{};
    int number1{getNumberFromUser(i, num)};
    int number2{getNumberFromUser(i, num)};

    std::cout << "The GCD of " << number1 << " and " << number2 << " is: " 
    << calculateGCD(number1, number2) << '\n';

    return 0;
}