// finding the unique value through the array where each value is comming towice axcept one 
// by using bit manuplationSS
#include<iostream>
using namespace std;
int unique(int a[],int n)
{
    int xore=0;
    for (int  i = 0; i < 7; i++)
    {
        xore=xore^a[i];
    }
    return xore;
}
int main()
{
    int  arr[7]={1,2,3,4,1,2,3};
    cout<<unique(arr,7);

}
