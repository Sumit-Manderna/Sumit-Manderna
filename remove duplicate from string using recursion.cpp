// to remove all duplicate items from the string 
#include<iostream>
using namespace std;
string remduplicate(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    
    string ans=remduplicate(s.substr(1));
    if (ch==ans[0])
    {
        return ans;

    }
    return ch+ans;
    
                            
}
int main(){
    cout<<remduplicate("aaaaabbbbjjjjddd");
}