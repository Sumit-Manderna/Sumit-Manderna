// sum of all sub array of a given array
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
    // sum of subarrays
    
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=array[j];
            cout<<sum<<" ";
        }
        
    }
    
}