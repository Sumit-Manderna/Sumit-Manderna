// to get the transpose of the matrix in a 2d array 
#include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    // to get the transe pose of the given matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout<<a[j][i]<<" ";
            // to swape the value 
            int temp;
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }
    // to preint the transpoe matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    

}