#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int inputSize;
    unsigned int i;
    int intVal;
    string stringVal;

    cin >> inputSize;

    /* Your code goes here */
    vector<int> tagList(inputSize);
    vector<string> customerList(inputSize);

    for (i = 0; i < tagList.size(); ++i)
    {
        cout << "Tag: " << tagList.at(i) << ", ";
        cout << "Customer: " << customerList.at(i) << endl;
    }

    return 0;
}