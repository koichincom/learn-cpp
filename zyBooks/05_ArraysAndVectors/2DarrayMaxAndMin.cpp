#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 2;
    const int NUM_COLS = 2;
    int milesTracker[NUM_ROWS][NUM_COLS];
    int i;
    int j;
    int maxMiles = 0;
    int minMiles = 0;
    int value;

    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            cin >> value;
            milesTracker[i][j] = value;
        }
    }

    maxMiles = milesTracker[0][0];
    minMiles = milesTracker[0][0];

    /* Your solution goes here  */
    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            if (milesTracker[i][j] > maxMiles)
            {
                maxMiles = milesTracker[i][j]; // 最大値を更新
            }
            if (milesTracker[i][j] < minMiles)
            {
                minMiles = milesTracker[i][j]; // 最小値を更新
            }
        }
    }

    cout << "Min miles: " << minMiles << endl;
    cout << "Max miles: " << maxMiles << endl;

    return 0;
}