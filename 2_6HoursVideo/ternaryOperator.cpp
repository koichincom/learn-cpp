#include <iostream>

int main()
{
    int grade = 75;
    grade >= 60 ? std::cout << "You Pass!" : std::cout << "You fail!";

    std::cout << "\n";

    int number = 9;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry";
    // std::cout << (hungry ? "You are hungry" : "You are full")
    return 0;
}
