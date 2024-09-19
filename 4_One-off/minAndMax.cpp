#include <iostream>

int main(){
    int minValue{};
    int maxValue{};
    int num{};
    int i{};

    do
    {
        std::cout << "Type a number (type 0 to quit): ";
        std::cin >> num;

        if (num == 0 && i == 0){
            std::cout << "No valid numbers were entered.\n";
            return 0;
        }

        if (num != 0){
            if (i == 0)
            {
                minValue = num;
                maxValue = num;
            }

            if (num < minValue)
            {
                minValue = num;
            }
            if (num > maxValue)
            {
                maxValue = num;
            }
            i++;
        }

    } while (num != 0);

    std::cout << "Minimum value was: " << minValue << '\n';
    std::cout << "Maximum value was: " << maxValue << '\n';

    return 0;
}