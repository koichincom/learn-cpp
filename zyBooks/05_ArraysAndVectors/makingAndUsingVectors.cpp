#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> stringVector;
    string value;
    int i;

    /* Your code goes here */
    while (true) {
        cin >> value;
        if (value == "end") {
            break;
        }
        stringVector.push_back(value);
    }
    

    for (i = 0; i < stringVector.size(); ++i) {
        cout << stringVector.at(i) << endl;
    }

    return 0;
}