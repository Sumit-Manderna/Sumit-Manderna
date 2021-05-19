// swap value using pointer in function
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=3;
    int b=4;
    // int*a=&a;
    // int *b=&b;
    swap(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
}