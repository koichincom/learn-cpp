#include <iostream>

int main(){
    int n, m;

    std::cout << "Input the number: ";
    std::cin >> n;
    m = n;

    for (int i = 0; i < m; i++){
        std::cout << n << " ";
        n--;
    }

    std::cout << std::endl;

    return 0;
}