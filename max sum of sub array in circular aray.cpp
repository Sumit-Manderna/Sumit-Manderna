// sum of the maximum sub array in a circular sub array 
#include<iostream>

using namespace std;
int kadane(int arr[],int n)
{
    int currentsum=0;
    int maxsum=INTMAX_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum+=arr[i];
        if (currentsum<0)
        {
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
 int main()
 {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for (int i = 0; i < n; i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+nonwrapsum;
    cout<<max(wrapsum,nonwrapsum);
    
    
    
 }