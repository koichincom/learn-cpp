#include <iostream>

int main(){
    std::cout << "How many numbers do you want to calculate: ";
    int num{};
    std::cin >> num;

    int typedNum{};
    int total{};
    int i{};

    while (i < num)
    {
        std::cout << "Type a number: ";
        std::cin >> typedNum;
        total += typedNum;
        if (typedNum == 0){
            break;
        }
        i++;
    }
    
    std::cout << "The total is " << total << "." << '\n';

    return 0;
}