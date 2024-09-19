// main.cpp

#include "io.h"

int main()
{
    int num1{readNumber()};
    int num2{readNumber()};

    writeAnswer(num1 + num2);

    return 0;
}