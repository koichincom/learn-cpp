#include <iostream>

int main(){

    // ユーザーからの入力
    std::cout << "Type a number: ";
    int num{};
    std::cin >> num;

    // 負の数の処理
    if (num < 0)
    {
        std::cout << '-';
        num = -num; // numを正の数に変換
    }

    // 数字が0の場合、0を表示
    if (num == 0)
    {
        std::cout << 0;
    }

    // 桁を逆順に出力
    while (num > 0)
    {
        int digit = num % 10; // 最後の桁を取り出す
        std::cout << digit;   // 最後の桁を出力
        num /= 10;            // 最後の桁を削除
    }
    
    // // Let the user input the number
    // std::cout << "Type a number: ";
    // int num{};
    // std::cin >> num;

    // // Put minus if the num is negative
    // char minus{};
    // if (num < 0){
    //     minus = '-';
    //     num = -num;
    // }

    // // Count the digit of num and define the first divisor 
    // int numberOfDigits{};
    // for (int i = num; i > 0; numberOfDigits++)
    // {
    //     i /= 10;
    // }
    // int divisor{1};
    // for (int i = 0; i < numberOfDigits - 1; i++)
    // {
    //     divisor *= 10;
    // }

    // std::cout << "The converted number is: " << minus;
    // int copiedNum{};
    // int i{};
    // for (int i = 0; i < numberOfDigits; i++)
    // {
    //     copiedNum /= 10;
    // }
    // int subtractor{};
    // subtractor = copiedNum * i;
    // num -= subtractor;

    // int indivisualDigit{};

    // // for (int i = 0; i < numberOfDigits; i++)
    // // {
    // //     indivisualDigit = num / divisor;
    // //     std::cout << indivisualDigit;
    // //     num -= (indivisualDigit * divisor);
    // //     divisor /= 10;
    // // }
    
    return 0;
}