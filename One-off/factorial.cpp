#include <iostream>

int factorial(int num){
    if (num == 0){
        return 1; // 0! = 1 by definition
    }

    int factorialOfNum{1};

    for (int i{1}; i <= num; i++){
        factorialOfNum *= i;
    }

    return factorialOfNum;
}

int main(){

    int num{};
    int i{};

    do
    {
        if (i > 0){
            std::cout << "Your input was invalid.\n";
        }
        std::cout << "Type a positive number: ";
        std::cin >> num;
        i++;
    } while (num < 0);

    int factorialOfNum = factorial(num);
    std::cout << num << "! = " << factorialOfNum << '\n';

    return 0;
}