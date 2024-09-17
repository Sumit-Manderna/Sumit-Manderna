// getting the first repetation of the no
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int mindx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[array[i]] != -1)
        {
            mindx = min(mindx, idx[array[i]]);
        }
        else
        {
            idx[array[i]] = i;
        }
    }
    if (mindx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << mindx + 1 << endl;
    }
    return 0;
}