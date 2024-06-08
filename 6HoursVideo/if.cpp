#include <iostream>

int main()
{
    int age;
    std::cout << "Enter you age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!" << std::endl;
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!" << std::endl;
    }
    else{
        std::cout << "You are not enough to enter! " << std::endl;
    }

    // If the if statement works once, other statements are ignored.


    return 0;
}
