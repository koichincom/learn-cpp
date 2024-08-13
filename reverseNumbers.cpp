#include <iostream>

int main(){
    int n, i;

    std::cout << "Input the number: " << std::endl;
    std::cin >> n;

    for (i = 0; i <= n; i++){
        std::cout << n << " ";
    }

    return 0;
}