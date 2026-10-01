// max till i the value in an array 
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
    // max till i 
    int max=INT_MIN;
    for (int  i = 0; i < n; i++)
    {
        if (array[i]>max)
        {
            max=array[i];

        }
        cout<<max<<" ";
    }
    
}