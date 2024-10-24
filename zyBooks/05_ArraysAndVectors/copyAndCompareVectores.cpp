#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numValues;
    unsigned int i;
    vector<int> numbersList;

    cin >> numValues;

    numbersList.resize(numValues);

    for (i = 0; i < numbersList.size(); ++i)
    {
        cin >> numbersList.at(i);
    }

    cout << "Original numbers: ";
    for (i = 0; i < numbersList.size(); ++i)
    {
        cout << numbersList.at(i) << " ";
    }
    cout << endl;

    /* Your code goes here */
    for (i = 0; i < numbersList.size(); ++i) {
        if (numbersList.at(i) % 2 != 0) {
            numbersList.at(i) += 1;
        }
    }

    cout << "Nearest odd numbers: ";
    for (i = 0; i < numbersList.size(); ++i)
    {
        cout << numbersList.at(i) << " ";
    }
    cout << endl;

    return 0;
}