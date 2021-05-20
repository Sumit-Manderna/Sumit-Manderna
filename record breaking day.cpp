// record breaking day 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int max=INT_MIN;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (max<array[i] && array[i]>array[i+1])
        {
            ans++;
             max=array[i];
        }    
    }
    cout<<ans;
    
}