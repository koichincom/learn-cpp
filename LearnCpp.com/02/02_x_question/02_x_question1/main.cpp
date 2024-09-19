#include <iostream>

// Forward Declarations
int readNumber();
void writeAnswer(int num);

int main(){
    int num1{readNumber()};
    int num2{readNumber()};

    writeAnswer(num1 + num2);

    return 0;
}

int readNumber(){
    int num{};
    std::cout << "Type a number: ";
    std::cin >> num;

    return num;
}

void writeAnswer(int num){
    std::cout << "The sum is: " << num << '\n';
}