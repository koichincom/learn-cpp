#include <iostream>

int main(){

    // Let the user a positive number as a height
    int n{};
    int i{};
    do {
        if (i > 0){
            std::cout << "Your input was invalid\n";
        }
        std::cout << "Type a height: ";
        std::cin >> n;
        i++;
    } while (n < 1);

    const int base{(n * 2) - 1};
    int line{};

    for (line = 1; line <= n; line++)
    {
        int number{line + (line - 1)}; 
        int space{(base - number) / 2}; 

        // Print leading spaces
        for (int j{0}; j < space; j++)
        {
            std::cout << ' '; 
        }

        // Print ascending numbers
        for (int k = 1; k <= line; k++)
        {
            std::cout << k;
        }

        // Print descending numbers
        for (int m{line}; m > 1; m--){
            std::cout << m - 1;
        }

        std::cout << '\n';
    }

    return 0;
}