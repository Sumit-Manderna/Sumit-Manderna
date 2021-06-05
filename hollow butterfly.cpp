// hollow butterfly
// *        *
// **      **
// * *    * *
// *  *  *  *
// *   **   *
// *   **   *
// *  *  *  *
// * *    * *
// **      **
// *        *
#include<iostream>
using namespace std;
int main(){
    int row;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <=row; i++)
    {
        int space=(row-i)*2;
        cout<<endl;
        for (int j = 1; j <=i; j++)
        {
            if((j==1)||(j==i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        for (int j = space; j >=1; j--)
        {
            cout<<" ";
        }
        for (int j = i; j >=1; j--)
        {
            if((j==1)||(j==i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
    }    
    for (int i = row; i >=1; i--)
    {
        int space=(row-i)*2;
        cout<<endl;
        for (int j = 1; j <=i; j++)
        {
            if((j==1)||(j==i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        for (int j = space; j >=1; j--)
        {
            cout<<" ";
        }
        for (int j = i; j >=1; j--)
        {
            if((j==1)||(j==i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        
        
    }
    
}   