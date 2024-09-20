#include <iostream>

int main(){
    int positiveNum;
    int i = 0;

    do{
        if (i > 0)
        {
            std::cout << "Please enter a number greater than or equal to 10. " << std::endl;
        }
        std::cout << "Enter a positive number: ";
        std::cin >> positiveNum;
        i++;
    } while (positiveNum < 10);

    std::cout << "You passed.";

    return 0;
}