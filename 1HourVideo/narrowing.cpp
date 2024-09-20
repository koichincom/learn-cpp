#include <iostream>

int main(){
    int number = 1000000;
    short another = number;
    std::cout << another << std::endl;

    short secNumber = 100;
    int secAnother = secNumber;
    std::cout << secAnother << std::endl;


    return 0;
}