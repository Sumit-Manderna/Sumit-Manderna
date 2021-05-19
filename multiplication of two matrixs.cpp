// to the multiplication of the two matricesin a thrid matrix using 2d array 
#include<iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1][n2],b[n2][n3],r[n1][n3];

    // taking values for first matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>a[i][j];
        }
        
    }

    // takig values for second matrix
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>b[i][j];
        }
        
    }

    // intilizing the  resultant matrix with 0 at each value 
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            r[i][j]=0;
        }
        
    }
    

    // multiplying  the two matrix 
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n3; k++)
            {
                r[i][k]+=a[i][j]*b[j][k];
            }
            
        }
        
    }

    // printing the result matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
}