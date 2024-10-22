#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_VALS = 4;
    vector<int> origList(NUM_VALS);
    vector<int> offsetAmount(NUM_VALS);
    unsigned int i;

    for (i = 0; i < origList.size(); ++i)
    {
        cin >> origList.at(i);
    }

    for (i = 0; i < offsetAmount.size(); ++i)
    {
        cin >> offsetAmount.at(i);
    }

    /* Your solution goes here  */
    for (i = 0; i < origList.size(); ++i) {
        cout << origList.at(i) + offsetAmount.at(i) << " ";
    }


    cout << endl;

    return 0;
}