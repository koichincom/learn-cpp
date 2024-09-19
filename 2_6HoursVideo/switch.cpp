#include <iostream>

int main()
{
    /*
        switch = alternative to using many "else if" statements
        compare one value against matching cases
    */
   
    int month;
    std::cout << "Enter the month (1-4): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January.";
            break;
        case 2:
            std::cout << "It is February.";
            break;
        case 3:
            std::cout << "It is March.";
            break;
        case 4:
            std::cout << "It is April.";
            break;
        default:
            std::cout << "Please enter in only number (1-4).";
    }

    return 0;
}
