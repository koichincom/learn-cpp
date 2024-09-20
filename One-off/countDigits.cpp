#include <iostream>
#include <string>

int main(){
    int n;
    int i = 0;
    std::string digit;
    std::cout << "Type a number: ";
    std::cin >> n;

    while (n >= 0){
        n = n / 10;
        i++;
    }

    if(i < 2){
        digit = "digit";
    } else {
        digit = "digits";
    }

    std::cout << n << " has " << i << digit << std::endl;
    return 0;
}