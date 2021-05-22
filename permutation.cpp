// to get the permutation of the distint number in an array
#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> ans;
void solve(vector<int> a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        solve(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}

vector<vector<int>> permutate(vector<int> a)
{
    solve(a, 0);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
     permutate(a);
     for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}