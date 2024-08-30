#include <iostream>

int add(int a, int b) {
    return a + b;
}

void printHello(){
    std::cout << "Hello, World!" << '\n';
}

int main(){

    int x = 5;
    int y = 3;

    int sum = add(x, y); 

    std::cout << "The sum is: " << sum << '\n';
    printHello();

    return 0;
}