#include <iostream>

// Ask the user to enter three values, and print these values.
int main(){
    int a{};
    int b{};
    int c{};

    std::cout << "Enter three numbers (separate them by spaces): ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    // The answer was like below
    // std::cin >> x >> y >> z;

    std::cout << "You entered " << a << ", " << b << ", and " << c << ".\n"; 

    return 0;
}