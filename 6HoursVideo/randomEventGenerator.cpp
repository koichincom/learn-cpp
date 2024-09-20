#include <iostream>
#include <ctime>
#include <string>

int main(){

    srand(time(0)); // Set a seed for rand()

    int event = (rand() % 3) + 1; // Generate a pseudo-random number between 1 and 3
    
    // Use switch-case to handle different events
    switch (event)
    {
    case 1:
        std::cout << "1 " << std::endl;
        break;

    case 2:
        std::cout << "2 " << std::endl;
        break;

    case 3:
        std::cout << "3 " << std::endl;
        break;

    default:
        std::cout << "The random number wasn't generated.";
        break;
    }

    return 0;
}