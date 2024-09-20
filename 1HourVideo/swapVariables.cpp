#include <iostream>

int main(){
    int A = 10;
    int B = 8;

    int temp = B;
    B = A;
    A = temp;  

    std::cout << "A: " << A << std::endl;
    std::cout << "B: " << B << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Temp: " << temp << std::endl;
    return 0;
}