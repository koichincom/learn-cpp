// Starts from 1:36:18
#include <iostream>
#include <string>

int main(){

    std::string name = "";

    // if(name.empty()){
    //     std::cout << "Entry your name: ";
    //     std::getline(std::cin, name);
    // }

    // if-statement works once, but while-loop is one of loops, so it works forever while it is true

    while(name.empty()){
        std::cout << "Entry your name: ";
        std::getline(std::cin, name);
    }

    // while(1 == 1){
    //     // This is an inifinite loop.
    //     std::cout << "Hey Help Me!";
    // }

    

    std::cout << "Hello " << name << std::endl;
    return 0;
}