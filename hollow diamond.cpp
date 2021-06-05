// hollow diamond
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *
#include<iostream>
using namespace std;
int main(){
    int row,temp;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        cout<<endl;
        for (int j = 1; j <= row-i; j++)
        {
            cout<<" ";
        }
        for (int j =row ; j >= 1; j--)
        {
            if ((j+i)%6==0)
            {
                cout<<"*";
            }   
            
        }
        for (int  j = 2; j <=i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 2; j <= i; j++)
        {
            if(j==i)
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
        cout<<endl;
        for (int j = 1; j <= row-i; j++)
        {
            cout<<" ";
        }
        for (int j =row ; j >= 1; j--)
        {
            if ((j+i)%6==0)
            {
                cout<<"*";
            }   
            
        }
        for (int  j = 2; j <=i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 2; j <= i; j++)
        {
            if(j==i)
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