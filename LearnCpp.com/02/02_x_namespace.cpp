#include <iostream>

namespace A
{
    int value = 10; // A名前空間内のvalue
}

namespace B
{
    int value = 20; // B名前空間内のvalue
}

int main()
{
    std::cout << A::value << std::endl; // A名前空間のvalueを出力 (10)
    std::cout << B::value << std::endl; // B名前空間のvalueを出力 (20)
    return 0;
}
