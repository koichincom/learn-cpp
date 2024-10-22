#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> oldestPeople(5);
    int nthPerson; // User input, Nth oldest person

    oldestPeople.at(0) = 122; // Died 1997 in France
    oldestPeople.at(1) = 119; // Died 1999 in U.S.
    oldestPeople.at(2) = 117; // Died 1993 in U.S.
    oldestPeople.at(3) = 117; // Died 1998 in Canada
    oldestPeople.at(4) = 116; // Died 2006 in Ecuador

    cout << "Enter N (1..5): ";
    cin >> nthPerson;

    // Check if the input is valid and within range
    if (!cin)
    {
        cout << "Invalid input. Please enter a number." << endl;
    }
    else if ((nthPerson >= 1) && (nthPerson <= 5))
    {
        cout << "The #" << nthPerson << " oldest person lived ";
        cout << oldestPeople.at(nthPerson - 1) << " years." << endl;
    }
    else
    {
        cout << "Please enter a number between 1 and 5." << endl;
    }

    return 0;
}