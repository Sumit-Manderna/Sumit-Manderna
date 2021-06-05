// pallindromic pattern
//     1
//    212
//   32123
//  4321234
// 543212345
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
        for (int j = i; j >=1; j--)
        {
            cout<<j;
        }
        for (int k = 2; k <= i; k++)
        {
            cout<<k;
        }
    }
    
}