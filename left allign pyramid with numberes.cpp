// left allign pyramid with numberes
//  1
//  2  2
//  3  3  3
//  4  4  4  4
//  5  5  5  5  5
#include<iostream>
using namespace std;
int main(){
    int row,temp;
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <=row; i++)
    {
        temp=i;
        cout<<endl;
        for (int j = 1; j <=i; j++)
        {

            if (j<=i)
            {
                cout<<" "<<temp<<" ";
            }
            else
            {
                cout<<"   ";
            }
            
            
        }
        
    }
    
}