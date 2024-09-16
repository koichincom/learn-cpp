#include <iostream>

bool isEven(int num){
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(){
    int numbers[10];
    int evenCount{};
    int evenSum{};

    // Let the user input 10 numbers
    std::cout << "Enter 10 numbers: ";
    for (int i{}; i < 10; i++) {
        std::cin >> numbers[i];
    }

    // Check if it's even, count, and sum
    for (int i{}; i < 10; i++) {
        if (isEven(numbers[i])) {
            evenCount++;
            evenSum += numbers[i];
        }
    }

    // Display the result
    std::cout << "Even: " << evenCount << ", Sum of even: " << evenSum << '\n';

    return 0;
}