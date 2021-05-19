// to seperated a given string in two different string of
//  low case letter orm uppercase letter
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    // to convert in lower case 
    cout<<'a'-'A';
    for (int  i = 0; i < str.size(); i++)
    {
        if(str[i]>='a'&& str[i]<='z')
            str[i]=str[i]-32;
    }
    cout<<str;
    cout<<endl;
    // to convert in tower case /
    for (int  i = 0; i < str.length(); i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32;
    }
    
    cout<<str;
}