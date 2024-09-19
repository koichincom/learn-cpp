#include <iostream>

bool isEven(int num){
    if (num % 2 == 0){
        return true;
    } else { 
        return false;
    }
}

int main(){

    std::cout << "Type a number: ";
    int num{};
    std::cin >> num;

    if (isEven(num)){
        std::cout << " is even.\n";
    } else {
        std::cout << num << " is odd.\n";
    }

    return 0;
}