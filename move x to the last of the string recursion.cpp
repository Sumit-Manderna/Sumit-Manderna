// to move the total no of x to the last of the string 
#include<iostream>
using namespace std;
string movelast(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=movelast(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
    else
    {
        
        return ch+ans;
    }
    return ans;
}
int main(){
    cout<<movelast("axasdxxajoxajg");
}