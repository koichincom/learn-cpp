#include <iostream>

int readNumber()
{
    std::cout << "Type a number to sum up: ";
    int num{};
    std::cin >> num;
    return num;
}

void writeAnswer(int result)
{
    std::cout << "The result is: " << result << '\n';
}