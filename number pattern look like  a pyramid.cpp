// number pattern look like  a pyramid    
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
 
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
        for (int j = 1; j <=i; j++)
        {
            cout<<j<<" ";
        }
        
        
    }
    
}