#include <iostream>

int main()
{
    int height{};
    do
    {
        std::cout << "Type the height (odd): ";
        std::cin >> height;
    } while (height % 2 == 0);

    int biggestNum = height / 2 + 1;

    for (int line = 1; line <= height; ++line)
    {
        int num = (line <= biggestNum) ? line : height - line + 1;
        int space = biggestNum - num;

        for (int i = 0; i < space; ++i)
            std::cout << ' ';
        for (int j = 0; j < 2 * num - 1; ++j)
            std::cout << num;

        std::cout << '\n';
    }

    return 0;
}

// #include <iostream>

// int main(){
//     // Let the user to type odd number as a height
//     int height{};
//     do{
//         std::cout << "Type the height (odd): ";
//         std::cin >> height;
//     } while (height % 2 == 0);
    
//     // Define some number of the diamond
//     int biggestNum{height / 2 + 1};
//     int line{};

//     for (line = 1; line <= height; line++) // Height
//     {
//         int space{biggestNum - line}; // Number of spaces depend on the line // fix: the definition of the space
//         for (int length{1}; length <= biggestNum - space; length++) // Length of the line depend on the line
//         {
//             std::cout << ' ';
//             std::cout << line;
//         }
        
//         std::cout << '\n';
//     }

//     return 0;
// }