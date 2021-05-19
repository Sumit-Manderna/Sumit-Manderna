// sum of any two no in an arry is equal to given no or not
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    bool pairsum=false;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == key)
            {
                pairsum = true;
                cout<<i<<" "<<j<<endl;
                
            }
            
        }
    }
    cout << pairsum;
}