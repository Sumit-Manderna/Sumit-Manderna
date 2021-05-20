// sumof the sub array of a givee array is equal to given no 
#include"bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int s=0,e=0,st=0,en=0;
    int current=0;
    while (e<n && current+a[e]<=sum)
    {
        current=current+a[e];
        e++;
        
    }
    if (current==sum)
    {
        cout<<s+1<<" "<<e;
        return 0;
    }
    while (e<n)
    {
        current+=a[e];
        while (current>sum)
        {
            current-=a[s];
            s++; 
        }
        if(current==sum)
        {
            st=s+1;
            en=e+1;
            break;
        }
        e++;
        
        
    }
    cout<<st<<" "<<en;
     
    

    return 0;
    
    
    
}