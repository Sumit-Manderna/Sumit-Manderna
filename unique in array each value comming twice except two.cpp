//  finding the unique value through the array where each 
// 3value is comming thrice axcept one 
// by using bit manuplationSS
#include<iostream>
using namespace std;
int setbits(int n,int pos){
    return ((n&(n>>pos))!=0);
}
void unique(int a[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^a[i];
    }
    int setbit=0;
    int tempxor=xorsum;
    int pos=0;
    while (setbit!=1)
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for (int i=0;i<n;i++)
    {
        if(setbits(a[i],pos-1))
        {
            newxor=newxor^a[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor);
    
    
}
int main()
{
    int arr[8]={1,2,3,5,7,1,2,3};
    unique(arr,8);
}