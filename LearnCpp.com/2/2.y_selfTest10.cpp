#include <iostream>

bool isEven(int number);

int main(){

    int num{};
    do {
        std::cout << "Please enter a number: ";
        std::cin >> num;

        if (num == 0){
            break;
        }

        if (isEven(num) == true){
            std::cout << num << " is even.\n";
        } else {
            std::cout << num << " is odd.\n";
        }
    } while (num != 0);

    return 0;
}

bool isEven(int number){
    if (number % 2 == 0){
        return true;
    } else {
        return false;
    }
}

/* 
    bool isEven(int number) {
    return number % 2 == 0;
}*/