#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> dailyScores;
    int vecLength;
    int sumValues;
    unsigned int i;
    int score;

    cin >> vecLength;

    for (i = 0; i < vecLength; ++i)
    {
        cin >> score;
        dailyScores.push_back(score);
    }

    sumValues = 0;

    /* Your code goes here */
    // Sum all numbers below 139

    for (i = 0; i < dailyScores.size(); ++i) {
        if (dailyScores.at(i) < 139) {
            sumValues += dailyScores.at(i);
        }
    }

    cout << "Sum of values below 139: " << sumValues << endl;

    return 0;
}