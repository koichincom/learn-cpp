#include <iostream>

int main(){
    int number = 0b11111111;
    int hexadeciamlLiteral = 0xff;
    std::cout << number << "\n";

    int decimalNumber = 255;       // 10進数リテラル
    int binaryNumber = 0b11111111; // 2進数リテラル
    int octalNumber = 0377;        // 8進数リテラル
    int hexNumber = 0xFF;          // 16進数リテラル

    unsigned int testingNumber = -35;
    std::cout << testingNumber << std::endl;

    return 0;
}