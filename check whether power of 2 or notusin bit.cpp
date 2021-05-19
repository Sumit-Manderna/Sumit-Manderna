// checckking weather the given value is the power of two or not by using bit manuplation
#include<iostream>
using namespace std;
int power_of_2(int n)
{
    return !(n & n-1);
}
int main()
{
    cout<<power_of_2(16);
}