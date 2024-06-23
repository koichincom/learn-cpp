#include <iostream>
#include <string>

int main(){

    std::string password = "secret";
    std::string attempt;
    int i = 0;

    while (attempt != password){
        if (i > 0)
        {
            std::cout << "The password you typed was wrong." << std::endl;
        }
        std::cout << "Type your password: ";
        std::getline(std::cin, attempt);
        i++;
    }

    std::cout << "------------------------------------" << std::endl;
    std::cout << "The password you typed was correct." << std::endl;

    return 0;
}