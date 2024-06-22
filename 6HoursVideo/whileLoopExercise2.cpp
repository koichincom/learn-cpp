#include <iostream>

int main(){
    int num;
    int sum = 0;

    do{
        std::cout << "Enter a number: ";
        std::cin >> num;
        sum += num;
    }while(num != 0);

    std::cout << sum << std::endl;

    return 0;
}