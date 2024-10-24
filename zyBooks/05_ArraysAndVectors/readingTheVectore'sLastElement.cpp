#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_ELEMENTS = 3;
    vector<int> mpgTracker(NUM_ELEMENTS);
    int i;

    for (i = 0; i < mpgTracker.size(); ++i)
    {
        cin >> mpgTracker.at(i);
    }

    /* Your solution goes here  */
    cout << "Last mpg reading: " << mpgTracker.at(i - 1) << '\n';

    return 0;
}