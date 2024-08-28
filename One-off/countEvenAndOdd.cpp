#include <iostream>

int main(){
    int evenCount{};
    int oddCount{};

    for (int i{1}; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    std::cout << "Even: " << evenCount << '\n';
    std::cout << "Odd: " << oddCount << '\n';

    return 0;
}