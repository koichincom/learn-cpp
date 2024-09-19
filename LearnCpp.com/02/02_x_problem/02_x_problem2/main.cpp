#include <iostream>

int readNumber();
void writeAnswer(int result);

int main()
{
    int num1{readNumber()};
    int num2{readNumber()};

    writeAnswer(num1 + num2);
}