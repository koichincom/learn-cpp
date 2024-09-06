#include <iostream>

int main()
{
    // Here's some math/physics values that we copy-pasted from elsewhere
    [[maybe_unused]] double pi{3.14159};
    [[maybe_unused]] double gravity{9.8};
    [[maybe_unused]] double phi{1.61803};

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // We're not using gravity in this program
    // The compiler will likely complain about gravity being defined but unused

    return 0;
}