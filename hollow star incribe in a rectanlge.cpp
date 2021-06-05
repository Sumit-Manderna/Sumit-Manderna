// hollow star incribe in a rectanlge
// *********
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****
// *********
#include<iostream>
using namespace std;
int main(){
    int row,temp;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <=row; i++)
    {
        temp=1;
        cout<<endl;
        for (int j = 1; j <= row+1-i; j++)
        {
            cout<<"*";
        }
        for (int j = 2; j <=i; j++)
        {
            cout<<" ";
        }
        for (int j = 3; j <=i; j++)
        {
            cout<<" ";
        }
        if (i==1)
        {
             for (int k = 1; k <= row-i; k++)
            {
                cout<<"*";
            }
        }
        else   
        {
            for (int k = 1; k <=row-i+1; k++)   
            {
                cout<<"*";
            }
            
        }
       
        
        
    }
    
    for (int i = row; i >=1; i--)
    {
        temp=1;
        cout<<endl;
        for (int j = 1; j <= row+1-i; j++)
        {
            cout<<"*";
        }
        for (int j = 2; j <=i; j++)
        {
            cout<<" ";
        }
        for (int j = 3; j <=i; j++)
        {
            cout<<" ";
        }
        if (i==1)
        {
             for (int k = 1; k <= row-i; k++)
            {
                cout<<"*";
            }
        }
        else   
        {
            for (int k = 1; k <=row-i+1; k++)   
            {
                cout<<"*";
            }
            
        }
       
        
        
    }
}