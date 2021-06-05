// star pattern
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
    #include<iostream>
using namespace std;
int main(){
    int row,temp;
    
    cout<<"enter the no of row and column "<<endl;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        cout<<endl;
        for (int j = 1; j <=row-i; j++)
        {
            cout<<" ";
        }
        for (int j =i; j >=1; j--)
        {
            cout<<"*";
        }
        for (int k = 2; k <= i; k++)
        {
            cout<<"*";
        }
     
    }
      for (int i = row; i >=1; i--)
    {
        cout<<endl;
        for (int j = 1; j <=row-i; j++)
        {
            cout<<" ";
        }
        for (int j =i; j >=1; j--)
        {
            cout<<"*";
        }
        for (int k = 2; k <= i; k++)
        {
            cout<<"*";
        }
     
    }
    
}