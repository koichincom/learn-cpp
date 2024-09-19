#include <iostream>

int main(){
    // Let the user input a height
    std::cout << "Type a height: ";
    int n{};
    std::cin >> n;

    // Constant definiton
    int base{2 * n - 1};
    int line{};
    

    for (line = 0; line < n; line++) // loop of line
    {
        int space{n - line};
        int num{base - space};
        int finalLength{space + num};

        for (int length{}; length < finalLength; length++) // loop of length
        {
            if (length > space)
            {
                std::cout << 1;
            } else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }

    return 0;
}