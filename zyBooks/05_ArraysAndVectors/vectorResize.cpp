#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> valElements(1);
    int valElementsSize = valElements.size();
    int factorVal;
    int i;

    valElements.at(0) = 3;

    cin >> factorVal;

    for (i = 0; i < valElements.size(); ++i)
    {
        cout << valElements.at(i) << " ";
    }
    cout << endl;

    /* Your code goes here */
    valElements.resize (valElements.size() * factorVal);

    for (i = 1; i < factorVal * valElementsSize; ++i)
    {
        valElements.at(i) = -1;
    }

    for (i = 0; i < valElements.size(); ++i)
    {
        cout << valElements.at(i) << " ";
    }
    cout << endl;

    return 0;
}