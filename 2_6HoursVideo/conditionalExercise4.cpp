#include <iostream>

int main(){

    int num;
    std::cout << "Input a number: ";
    std::cin >> num;

    if (num % 2 == 0){
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }

    return 0;
}