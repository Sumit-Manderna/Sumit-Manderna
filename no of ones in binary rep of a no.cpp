// checking the no of ones in the binary representation
//  or a no using bit manupaltion
#include<iostream>
using namespace std;
int numof_ones(int n)
{
    int count=0;
    while (n)
    {
        n=(n & n-1);
        count++;
    }
    return (count); 
}
int main()
{
    cout<<numof_ones(19);
}