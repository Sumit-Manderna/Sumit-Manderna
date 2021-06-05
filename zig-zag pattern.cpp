// zig-zag pattern
//   *   *  
//  * * * * 
// *   *   *
#include<iostream>
using namespace std;
int main(){
    int row,temp;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <=3; i++)
    {
        cout<<endl;
        for (int j = 1; j <=row; j++)
        {
            if (((j+i)%4==0)||((i==2)&&(j%4==0)))
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