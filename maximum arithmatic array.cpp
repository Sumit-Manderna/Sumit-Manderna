// maximum airthematic array of a given array 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    int current=2;
    int ans=2;
    int i=2;
    while (i<n)
    {
        if (pd==a[i]-a[i-1])
        {
            current+=1;
        }
        else
        { 
            pd=a[i]-a[i-1];
            current=2;
        }
        ans=max(ans,current);
        i++;
    }
    cout<<ans<<endl;
}