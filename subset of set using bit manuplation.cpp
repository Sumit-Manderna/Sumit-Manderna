// to get the  subset of a given set by bit  manuplation
#include<iostream>
using namespace std;
void subset(int a[],int n)
{
    for (int  i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))
            {
                cout<<a[j];
            }
            
            
        }
        cout<<endl;
    }
    
}
int main()
{
    int array[4]={1,2,3,4};
    subset(array,4);
}