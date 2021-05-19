// to count the no of path in the board game using recursion i 
// and j formate
#include<iostream>
using namespace std;

int countpathmaze(int n,int i,int j)
{
    if (i==n-1 && j==n-1)
    {
        return 1;
    }
    if (i>n-1 || j>n-1)     
    {
        return 0;
    }
    int count=0;
    count+=countpathmaze(n,i+1,j);
    count+=countpathmaze(n,i,j+1);
    return count;
    
}
int main(){
    cout<<countpathmaze(3,0,0);
}