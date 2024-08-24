#include <iostream>

int main(){
    int num{};
    int countEven{};
    int countOdd{};

    do
    {
        std::cout << "Type a number (type 0 to quit): ";
        std::cin >> num;

        if (num % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    } while (num != 0);
    
    
    std::cout << "You entered " << countEven << " even numbers and " << countOdd << " odd numbers.\n";

    return 0;
}