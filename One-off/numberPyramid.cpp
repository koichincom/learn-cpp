// #include <iostream>

// int main(){
//     // Let the user to type a height greater than 1
//     int n{};
//     do {
//         std::cout << "Type the height: ";
//         std::cin >> n;
//     } while (n <= 0);
    
//     // Initial length is length of the base of the pyramid
//     int length {(2 * n) - 1};


//     int upNum{1};
//     int downNum{n};
//     for (int i = 1; i <= n; i++) // Height
//     {
//         for (int j = 1; j <= length; j++) // Length
//         {
//             if (j == n - (i - 1))
//             {
//                 std::cout << upNum;
//             }
//             else
//             {
//                 std::cout << " ";
//             }
//             upNum++;
//         }     
//         std::cout << '\n';
//     }
    
//     return 0;
// }

#include <iostream>

int main()
{
    // ユーザーにピラミッドの高さを入力させる
    int n{};
    do
    {
        std::cout << "Type the height: ";
        std::cin >> n;
    } while (n <= 0);

    // 各行を処理
    for (int i = 1; i <= n; i++)
    {
        // 各列を処理
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            // 出力する数字を決定
            int numToPrint = 0;

            // 左側の数字を出力する条件
            if (j >= n - (i - 1) && j <= n)
            {
                numToPrint = (j - (n - i + 1)) + 1;
            }
            // 右側の数字を出力する条件
            else if (j > n && j <= n + (i - 1))
            {
                numToPrint = (n + i) - j;
            }

            // 数字が決定されていれば出力、そうでなければ空白
            if (numToPrint > 0)
            {
                std::cout << numToPrint;
            }
            else
            {
                std::cout << " ";
            }
        }

        // 次の行へ移動
        std::cout << std::endl;
    }

    return 0;
}
