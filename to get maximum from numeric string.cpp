//  to get the maximum no from the numeric string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="123456789";
    sort(s.begin(),s.end(), greater<int>());
    cout<<s;

}