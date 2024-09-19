#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    const short minValue = 1;
    const short maxValue = 6;

    std::srand(time(nullptr));
    short dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    short dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

    std::cout << dice1 << "\n" << dice2 << std::endl;

    return 0;
}