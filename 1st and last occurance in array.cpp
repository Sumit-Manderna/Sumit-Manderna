// find the first and last occurence of the element in rthe array 
#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstoccurence( arr, n ,i+1,key);
    
}
int lastoccurence(int arr[],int n,int i,int key)
{
    int restarray= lastoccurence(arr,n,i+1,key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[7]={4,2,1,2,5,2,7};
    int n=7;
    int i=0;
    int key;
    cin>>key;
    cout<<firstoccurence(arr,n,i,key)<<endl;
    cout<<lastoccurence(arr,n,i,key)<<endl;
} 