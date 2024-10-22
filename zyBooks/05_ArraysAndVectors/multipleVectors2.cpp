#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ageList;
    vector<string> personList;
    int numElements;
    int ageAsked;
    unsigned int i;
    int intVal;
    string stringVal;

    cin >> numElements;

    for (i = 0; i < numElements; ++i)
    {
        cin >> intVal;
        cin >> stringVal;

        ageList.push_back(intVal);
        personList.push_back(stringVal);
    }

    cin >> ageAsked;

    /* Your code goes here */

    return 0;
}