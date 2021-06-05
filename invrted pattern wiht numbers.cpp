// invrted pattern wiht numbers 
// 12345
// 1234 
// 123  
// 12   
// 1    
#include<iostream>
using namespace std;
int main(){
    int row,temp;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = row; i >=1; i--)
    {
        cout<<endl;
        for (int j = 1; j <=row; j++)
        {
            if (j<=i)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
            
            
        }
        
    }
    
}