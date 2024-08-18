#include <iostream>

int main(){
    int radius;
    double area;
    std::cout << "What is the radius?: ";
    std::cin >> radius;

    area = radius * radius * 3.14;
    std::cout << "The area is " << area << ".";

    return 0;
}