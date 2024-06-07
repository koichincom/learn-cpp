#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Full name: ";
    std::getline(std::cin >> std::ws, name);

    // std::getline(std::cin, valuable); can read a whole line
    /* 
        When we have a cin, followed by getline, there is a inplicit \n at
        at the end of the cin line. 
    */

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old.";

    return 0;
}