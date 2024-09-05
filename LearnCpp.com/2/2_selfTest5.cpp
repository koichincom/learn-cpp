#include <iostream>

int getNumberFromUser(){
    int num{};
    do {
        std::cout << "Please enter a positive number: ";
        std::cin >> num;
    } while (num <= 0);

    return num;
}

int calculateDigitSum(int num){
    int sum{};
    int quotient{};

    while (num > 0)
    {
        quotient = num % 10;
        sum += quotient;        // Update the sum
        num /= 10;              // Go to a next digit
    }

    return sum;
}

int main(){
    int num{getNumberFromUser()};
    std::cout << calculateDigitSum(num) << '\n';
    
    return 0;
}