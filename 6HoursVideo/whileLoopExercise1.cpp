#include <iostream>

int main()
{
    int i = 0;
    int num;

    while(i < 10){
        num = ++i;
        std::cout << num << std::endl;
    }

    return 0;
}
