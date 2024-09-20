#include <iostream>

void printWelcomeMessage(){
    std::cout << "Welcome to the Math Program!\n";
}

int getNumberFromUser(){
    int num{};
    std::cout << "Please enter a number: ";
    std::cin >> num;
    return num;
}

/* what I was doing*/

// int getNumberFromUser(int& num1, int& num2){
//     int i{};

//     if (i > 0)
//     {
//         std::cout << "Please enter another number: ";
//         std::cin >> num1;
//         return num1;
//     } else {
//         std::cout << "Please enter a number: ";
//         std::cin >> num2;
//         return num2;
//     }
//     i++;
// }

int multiplyNumbers(int num1, int num2){
    return num1 * num2;
}

int main(){
    // Print a welcome message
    printWelcomeMessage();

    // Get two numbers from the user
    int num1 = getNumberFromUser();
    int num2 = getNumberFromUser();

    // Show the result of multiplication
    std::cout << "The result of multiplying " << num1 << " and " << num2 <<
    " is " << multiplyNumbers(num1, num2) << '\n';

    return 0;
}