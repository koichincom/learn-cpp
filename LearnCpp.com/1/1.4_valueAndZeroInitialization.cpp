#include <iostream>

int main(){
    int x{0};           // explicit initialization to value 0
    std::cout << x;     // we're using that zero value

    int x{};            // value initialization
    std::cin >> x;      // we're immediately replacing that value
    return 0;
}