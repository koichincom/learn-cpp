#include <iostream>

int main(){
    int a{};
    int b{};

    std::cout << "Type a first number: \n";
    std::cin >> a;

    std::cout << "Type a second number: \n";
    std::cin >> b;

    std::cout << a << " + " << b << " is " << a + b << " .\n";
    std::cout << a << " - " << b << " is " << a - b << " .\n";

    return 0;
}