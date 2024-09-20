#include <iostream>

int main()
{
    for(int i = 10; i >= 1; i--){
        // ++i or i++ are pre-increment and post-increment. But you can use i += 2
        std::cout << i << "\n";
    }

    std::cout << "Happy New Year!" << std::endl;
    return 0;
}
