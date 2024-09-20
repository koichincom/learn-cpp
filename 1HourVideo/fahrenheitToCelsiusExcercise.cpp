#include <iostream>

int main(){
    double fahrenheit;
    std::cout << "Enter the fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = ((fahrenheit - 32) * 5) / 9;
    std::cout << "The fahreneheit " << fahrenheit << " in celsius is " << celsius << "." << std::endl;

    return 0;
}