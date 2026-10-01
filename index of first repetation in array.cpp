// TO GET INDEX OF THE FIRST REPETITION OF THE  NO IN AN ARRAY
#include <iostream>
#include <climits>
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
    int minindx=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[array[i]] != -1)
        {
            minindx = min(minindx, idx[array[i]]);
        }
        else
        {
            idx[array[i]] = i;
        }
    }
    if (minindx == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minindx + 1 << endl;
    }
}
