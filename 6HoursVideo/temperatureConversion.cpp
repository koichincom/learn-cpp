#include <iostream>
#include <string>

int main()
{
    double temp;
    double convertedTemp;
    char tempType;
    std::string exactTempType;
    std::string exactConvertedTempType;

    // Receiving input from the user
    std::cout << "Enter the types of the temperature you want to converse, F or C: ";
    std::cin >> tempType;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // Defining the types of temperature depending on the tempType of the input.
    if(tempType == 'F' || tempType == 'f'){
        exactTempType = "fahrenheit";
        exactConvertedTempType = "celsius";
        convertedTemp = 5.0 / 9 * (temp - 32);
    }
    else if(tempType == 'C' || tempType == 'c'){
        exactTempType = "celsius";
        exactConvertedTempType = "fahrenheit";
        convertedTemp = 9.0 / 5 * temp + 32;
    }
    else{
        std::cout << "Your input is invalid." << std::endl;
        return 1;
    }

    // Outputting the results
    std::cout << temp << " degrees " << exactTempType << " is " << convertedTemp << " degrees " << exactConvertedTempType << "." << std::endl;
    return 0;
}
