#include <iostream>

int main(){
    double radius;
    std::cout << "Radius: ";
    std::cin >> radius;

    const double pi = 3.14;
    double areaOfACircle = pi * pow(radius, 2);
    std::cout << areaOfACircle << std::endl;

    return 0;
} 