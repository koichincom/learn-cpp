#include <iostream>

int readNumber();
void writeAnswer(int result);

int main(){
    int num1{readNumber()};
    int num2{readNumber()};

    writeAnswer(num1 + num2);
}

int readNumber(){
    std::cout << "Type a number to sum up: ";
    int num{};
    std::cin >> num;
    return num;
}

void writeAnswer(int result){
    std::cout << "The result is: " << result << '\n';
}