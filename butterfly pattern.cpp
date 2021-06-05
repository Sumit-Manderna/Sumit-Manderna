// butterfly pattern
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include<iostream>
using namespace std;
int main()
{
    int row,temp;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        cout<<endl;
        temp=row*2-(2*i);
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= temp; j++)
        {
            cout<<" ";

        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
    }
        // for downword butterfly
    for (int i = row; i >=1; i--)
    {
        cout<<endl;
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        temp=row*2-(2*i);
        for (int j = 1; j <= temp; j++)
        {
            cout<<" ";

        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        
    }
    
}
