// to print the all possible word by the combination of th two no of a 
// key pad mobile phone
#include<iostream>
using namespace std;
string keypadarr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void wdcomb(string s,string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code = keypadarr[ch-'0'];
    string rest=s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        wdcomb(rest,ans+code[i]);
        
    }
    
}
int main(){
    wdcomb("23","");
}