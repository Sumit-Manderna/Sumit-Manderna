// rectangular pattern
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"enter the no of row and column "<<endl;
    cin>>row>>column;
    for (int i = 1; i <=row; i++)
    {
        cout<<endl;
        for (int j = 1; j <=column; j++)
        {
            cout<<" * ";
        }
        
        
        
    }
    
}