#include <iostream>

int main(){
    int num;

    // Prompt user to enter a positive number
    do {
    std::cout << "Type a positive number: ";
    std::cin >> num;
    } while (num <= 0);

    int sum = 0;

    while (num > 0){
        sum += num % 10;
        num /= 10;
    }

    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}