#include <iostream>

int main()
{
    int temp;
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // If both statements are true
    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!";
    }
    else{
        std::cout << "The temperature is bad!";
    }

    std::cout << std::endl;

    // If either statements are true
    if (temp <= 0 || temp >= 30)
    {
        std::cout << "The temperature is bad!";
    }
    else
    {
        std::cout << "The temperature is good!";
    }

    std::cout << std::endl;

    bool sunny = true;

    if(!sunny == true){
        std::cout << "It is sunny outside!";
    }
    else{
        std::cout << "It is cloudy outside!";
    }

    return 0;
}
