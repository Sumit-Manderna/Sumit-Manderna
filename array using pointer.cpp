// printing the array using pointer
#include<iostream>

using namespace std;
int main()
{
    int a[3]={10,20,30};
    // cout<<*a;
    int *ptr=a;
    for (int  i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    

}