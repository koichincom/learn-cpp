#include <iostream>

int getNumberFromUser(){

    int num{};

    // Avoid negative numbers
    do {
        std::cout << "Please enter a number: ";
        std::cin >> num;
    } while (num < 0);

    return num;
}

int reverseDigits(int num){

    int reversedNum{};

    while (num > 0) {
        reversedNum *= 10;          // 10 times bigger to make a space
        reversedNum += num % 10;    // Get a number from the most small digit
        num /= 10;                  // Delete the digit that has already counted
    }

    return reversedNum;
}

int main(){
    int num{getNumberFromUser()};
    std::cout << "The reversed number is: " << reverseDigits(num) << '\n';
    return 0;
}