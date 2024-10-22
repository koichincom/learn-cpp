#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ベクターの初期値
    vector<int> valsVctr = {10, 3, 5, 1, 6}; // ここで適当な値を入れていますが、自由に変更できます。

    // 最初の要素を仮の最小値に設定　あくまで仮であることに注意する
    int tempVal = valsVctr.at(0);

    // 最小値を探すループ
    for (int i = 0; i < valsVctr.size(); ++i)
    {
        if (valsVctr.at(i) < tempVal)
        {
            tempVal = valsVctr.at(i); // 新しい最小値を設定
        }
    }

    // 結果を表示
    cout << "The minimum value is: " << tempVal << endl;

    return 0;
}
