#include <iostream>

int main(){
    int x{2};
    std::cout << (x = 5) << '\n';

    return 0;
}