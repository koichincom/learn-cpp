#include <iostream>

int main(){

    std::cout << "Type a number: ";
    int num{};
    std::cin >> num;

    while (num > 0)
    {
        std::cout << num % 10;
        num /= 10;
    }

    return 0;
}