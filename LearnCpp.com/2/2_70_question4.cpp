#include <iostream>

int doMath(int, int, int, int);

int main(){

    std::cout << "The answer is: " << doMath(4, 5, 6, 7) << '\n';

    return 0;
}

int doMath(int first, int second, int third, int fourth)
{
    return first + second * third / fourth;
}