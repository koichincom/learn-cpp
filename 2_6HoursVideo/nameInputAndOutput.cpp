#include <iostream>
#include <string>

int main(){
    std::string fullName;
    
    std::cout << "Type your name: " << std::endl;
    std::getline(std::cin, fullName);

    std::cout << "Your name is " << fullName << "." << std::endl;
    return 0;
}