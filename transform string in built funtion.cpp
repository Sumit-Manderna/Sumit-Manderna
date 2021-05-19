// to convert a given string in two different string of low case letter orm uppercase letter
// \using inbuilt function
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s ="ancfjdfJHGJKIGFRdfjfjedjrnf";
    // to conevrt int upper case 
    transform(s.begin(),s.end(),s.begin(),:: toupper);
    cout<<s<<endl;
    // to convert in lowere case 
    transform(s.begin(),s.end(),s.begin(),:: tolower);
    cout<<s;
}
