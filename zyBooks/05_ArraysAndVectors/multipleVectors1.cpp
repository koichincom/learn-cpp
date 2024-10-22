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

    // Vector 
    vector<int> tagList(inputSize);
    vector<string> customerList(inputSize);

    // Get taglists
    for (i = 0; i < tagList.size(); ++i) {
        cin >> intVal;
        tagList.at(i) = intVal;
    }

    // Get customerlists
    for (i = 0; i < customerList.size(); ++i){
        cin >> stringVal;
        customerList.at(i) = stringVal;
    }

    for (i = 0; i < tagList.size(); ++i)
    {
        cout << "Tag: " << tagList.at(i) << ", ";
        cout << "Customer: " << customerList.at(i) << endl;
    }

    return 0;
}