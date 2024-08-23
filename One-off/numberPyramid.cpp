#include <iostream>

int main(){
    int n{};
    do {
        std::cout << "Type the height: ";
        std::cin >> n;
    } while (n <= 0);
    
    int length {2 * n};

    int num{1};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            for (int num{1}; num < n; num++)
            {
                if (j == n - (i - 1))
                {
                    std::cout << num;
                }
                else if (j == n + (i - 1))
                {
                    std::cout << num;
                }
                else
                {
                    std::cout << " ";
                }
            }
        }
        std::cout << '\n';
        
    }
    
    return 0;
}