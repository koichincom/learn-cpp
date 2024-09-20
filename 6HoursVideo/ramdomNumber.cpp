#include <iostream>
#include <ctime>

int main(){

    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // Get a pseudo-random number between 1 and 6
    std::cout << num1 << "\n"; 

    return 0;
}