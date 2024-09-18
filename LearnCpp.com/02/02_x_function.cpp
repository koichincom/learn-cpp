#include <iostream>

// ユーザー定義関数 (user-defined function)
// これは値を返す関数 (value-returning function)
int add(int a, int b)
{
    // 関数のボディ (function body)
    return a + b; // return 文 (return statement)
}

// This is alos user-defined function
// 値を返さない関数 (void function)
void printResult(int result)
{
    std::cout << "The result is: " << result << std::endl;
}

int main()
{
    // 関数呼び出し (function call)
    int sum = add(3, 4); // 呼び出し元が caller、呼び出される関数が callee
    printResult(sum);    // 関数呼び出しには必ず括弧が必要

    // main関数の戻り値 (status code)
    return 0; // 0は成功を意味する (status code for success)
}
