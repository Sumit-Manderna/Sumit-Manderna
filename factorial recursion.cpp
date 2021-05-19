// factorial o fa given no using recursion
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    return (n*factorial(n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}