// spiral order matrixs traversal in 2d array 
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
    // spiral print order 
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
    while (row_start<=row_end && column_start<=column_end)
    {
        // for column traversal
        for (int col = column_start; col <= column_end; col++)
        {
            cout<<a[row_start][col]<<" ";
        }
        row_start++;

        //  for row traversal;
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<a[row][column_end]<<" ";
        }
        column_end--;

        // for column traversal in reverse order 
        for (int colR = column_end; colR >= column_start; colR--)
        {
            cout<<a[row_end][colR]<<" ";
        }
        row_end--;
        
        // for row traversal in reverse
        for (int rowR = row_end; rowR >= row_start; rowR--)
        {
            cout<<a[rowR][column_start]<<" ";
        }
        column_start++;
        
        
        
    }
    
    

    
}