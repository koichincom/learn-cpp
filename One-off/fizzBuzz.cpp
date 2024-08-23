#include <iostream>

int main(){

    int i{};
    int num{};

    do{
        if (i > 0)
        {
            std::cout << "Your input was invalid.\n";
        }
        std::cout << "Type a number (1 ~ 100): ";
        std::cin >> num;
        i++;
    } while (num < 1 || num > 100);

    if (num % 3 == 0)
    {
        std::cout << "Fizz";
    }
    if (num % 5 == 0)
    {
        std::cout << "Buzz";
    }
    if (num % 7 == 0)
    {
        std::cout << "Bazz";
    }

    if (num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
    {
        std::cout << num;
    }

    std::cout << '\n';

    return 0;
}