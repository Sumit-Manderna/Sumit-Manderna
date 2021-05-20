// pair sum problem with time complexity of the order n 
#include<iostream>
using namespace std;
bool pairsum(int a[],int n, int k)
{
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if (a[i]+a[j]==k)
        {
            cout<<i<<" "<<j<<endl;
            return true;
        }
        else if (a[i]+a[j]<k)
        {
            i+=1;
        }
        else
        {
            j-=1;
        }
     
    }
    return false;
}
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
    cout<<pairsum(a,n,key);
}