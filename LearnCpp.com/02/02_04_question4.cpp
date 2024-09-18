#include <iostream>

int doubleNumber(int num){
    return num *= 2;
}

/* Write a function called doubleNumber() that takes one integer parameter. 
The function should return double the value of the parameter. */
int main(){
    std::cout << "Type a number: ";
    int num{};
    std::cin >> num;

    std::cout << doubleNumber(num) << '\n';

    return 0;
}