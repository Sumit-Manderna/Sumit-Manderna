
// right shifted pyramid

//              *
//           *  *
//        *  *  *
//     *  *  *  *
//  *  *  *  *  *
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        cout<<endl;
        for (int j = row; j >=1; j--)
        {
            int temp,x=1;
            temp=j-i;
            if (x<=temp) 
            {
                cout<<"   ";
                x++;
            }
            else
            {
                cout<<" * ";
            }
            
            
        }

        
    }
    
    
}