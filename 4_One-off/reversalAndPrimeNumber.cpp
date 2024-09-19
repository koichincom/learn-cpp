#include <iostream>
#include <cmath>

bool IsPrime(int num);
 
int main(){
    std::cout << "Type a number: ";
    int num{};
    std::cin >> num;

    int reversedNum{};

    while (num > 0){
        int digit{num % 10};
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (IsPrime(reversedNum)) {
        std::cout << reversedNum << " is a prime number.\n";
    } else {
        std::cout << reversedNum << " is not a prime number.\n";
    }

    return 0;
}

bool IsPrime(int reversedNum){
    if (reversedNum < 2) return false;
    else if (reversedNum == 2) return true;
    else if (reversedNum % 2 == 0) return false; // Remove even numbers

    double sqrtNum = sqrt(reversedNum);
    for (int i = 3; i <= sqrtNum; i += 2){
        if (reversedNum % i == 0){
            return false;
        }
    }
    return true;
}