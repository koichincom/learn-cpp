#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;

    std::cout << "Full name: ";
    std::getline(std::cin, name);
    
    // std::getline(std::cin, valuable); can read a whole line

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old.";

    return 0;
}
