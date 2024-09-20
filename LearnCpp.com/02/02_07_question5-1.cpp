#include <iostream>
int add(int x, int y, int z);

int main()
{
    // std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}