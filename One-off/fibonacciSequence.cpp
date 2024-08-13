#include <iostream>

int main(){
    int n; // Numbers of the term starting from 0
    int m = 1; // 1 is an original fibonacci number (output 0 separately)
    int k; // 

    // Making m　1 or more to avoid invalid input from an user
    do{
        std::cout << "Input a number: " << std::endl;
        std::cin >> n;
        if (n > 1) {
            std::cout << "The number " << n << " is invalid. Please input a number 1 or greater." << std::endl;
        }
    } while (n <= 1);

    // 0 should always be outputted
    std::cout << "0";

    for (k = 1; k < n; k++){
        std::cout << ", " << m;
        m + m

    }

    return 0;
    }