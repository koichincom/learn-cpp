#include <iostream>

int main(){
    int x = 10;
    int y = x++; // x = 11, y = 10

    int a = 10;
    int b = ++a; // a = 11, b = 11

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}