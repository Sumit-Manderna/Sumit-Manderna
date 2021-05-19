// gcd  of two numbers using euclid algorithm with 
// inclusion exclusion
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int temp;
    while(temp!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}