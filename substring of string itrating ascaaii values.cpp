// to get the substirng of the given string with their asscai value 
#include<iostream>
using namespace std;
void ascaiisubstring(string s,string ans)
{
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int n=ch;
    string rest = s.substr(1);
    ascaiisubstring(rest,ans);
    ascaiisubstring(rest,ans+ch);
    ascaiisubstring(rest, ans+ to_string(n));
    
    
}
int main(){
    ascaiisubstring("AB","");
    cout<<endl;
}