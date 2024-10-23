#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_ELEMENTS = 3;
    vector<int> ticketList(NUM_ELEMENTS);
    unsigned int i;

    for (i = 0; i < ticketList.size(); ++i)
    {
        cin >> ticketList.at(i);
    }

    /* Your solution goes here  */
    ticketList.pop_back();

    for (i = 0; i < ticketList.size(); ++i)
    {
        cout << ticketList.at(i) << " ";
    }
    cout << endl;

    return 0;
}