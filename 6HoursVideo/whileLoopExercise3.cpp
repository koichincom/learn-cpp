#include <iostream>
#include <string>

int main(){
    int n;
    int sum = 0;
    std::cout << "Input one number: ";
    std::cin >> n;

    while(n >= 1){
        std::cout << n << std::endl;
        sum += n;
        --n;
    }

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}