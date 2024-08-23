#include <iostream>

int main(){
    int n{};
    do {
        std::cout << "Type the height: ";
        std::cin >> n;
    } while (n <= 0);
    
    int length {2 * n};

    int upNum{1};
    int downNum{n};
    for (int i = 1; i <= n; i++) // height
    {
        for (int j = 1; j <= length; j++) // length
        {
            for (int upNum{1}; upNum < n; upNum++) 
            {
                if (j == n - (i - 1))
                {
                    std::cout << upNum;
                }
                else
                {
                    std::cout << " ";
                }
            }
            for (int downNum{1}; downNum < n; downNum--) 
            {
                if (j == n + (i - 1))
                {
                    std::cout << downNum;
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