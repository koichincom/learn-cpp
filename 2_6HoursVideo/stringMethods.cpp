// Starts from 1:30:00
#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    // std::getline(input_stream, string_variable);

    if(name.length() > 12){
        std::cout << "Your name should be under 13 characters.";
    }
    else{
        std::cout << "Welcome " << name;
    }

    if (name.empty()){
        std::cout << "You didn't enter your name";
    }
    else{
        std::cout << "Hello " << name;
    }

    // name.clear();

    name.append("@gmail.com");
    std::cout << name;

    std::cout << name.at(0);

    name.insert(1, "@");
    std::cout << name << std::endl;

    std::cout << name.find(' ');

    return 0;
}
