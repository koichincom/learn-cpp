#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    std::srand(time(nullptr));
    int number = rand() % 10;
    std::cout << number << std::endl;

    return 0;
}