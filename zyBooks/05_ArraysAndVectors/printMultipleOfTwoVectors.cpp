#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int SIZE_LIST = 4;
    vector<int> keysList(SIZE_LIST);
    vector<int> itemsList(SIZE_LIST);
    unsigned int i;

    for (i = 0; i < keysList.size(); ++i)
    {
        cin >> keysList.at(i);
    }

    for (i = 0; i < itemsList.size(); ++i)
    {
        cin >> itemsList.at(i);
    }

    /* Your solution goes here  */
    

    cout << endl;

    return 0;
}