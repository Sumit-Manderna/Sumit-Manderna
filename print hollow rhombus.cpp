// print hollow rhombus
//     *****
//    *   *
//   *   *
//  *   *
// *****
#include<iostream>
using namespace std;
int main(){
    int row,temp;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <=row; i++)
    {
        cout<<endl;
        for (int j = 1; j <=row-i; j++)
        {
            cout<<" ";
        }    
        
        
        for (int j = 1; j <=row; j++)
        {
            if ((i==1)||(i==row))
            {
                cout<<"*";
            }
            else
            {
                if ((j==1)||(j==row))
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
    
}