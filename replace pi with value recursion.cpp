// replce pi with 3.14 in the given string 
#include<iostream>
using namespace std;
void pireplace(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p'&&s[1]=='i')
    {
        cout<<"3.14";
        pireplace(s.substr(2));
    }
    else
    {
        cout<<s[0];
        pireplace(s.substr(1));
    }
    
}
int main(){
    pireplace("pippxxppiixipi");
}