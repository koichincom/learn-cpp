#include <iostream>

int main()
{
    // do-while = do some code first, and then repeat again if condition is true

    int number;

    // std::cout << "Type number: ";
    // std::cin >> number;

    // while(number < 0){
    //     std::cout << "Type positive number: ";
    //     std::cin >> number;
    // }

    do{
        std::cout << "Type positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << number << std::endl;

    return 0;
}
