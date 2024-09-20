// io.cpp
#include "io.h"
#include <iostream>

int readNumber()
{
    int num{};
    std::cout << "Type a number: ";
    std::cin >> num;
    return num;
}

void writeAnswer(int num)
{
    std::cout << "The sum is: " << num << '\n';
}