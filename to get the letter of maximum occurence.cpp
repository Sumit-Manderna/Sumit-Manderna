// to get the latter of maximum occurance of the no                                                                           
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s ="aabbbbdefredgccccc";
    int count[26];
    for(int i=0; i<26;i++)
        count[i]=0;
    
    for(int i=0; i<s.size();i++)
    {
        count[s[i]-'a']++;
    }
    int maxnum=0;
    char ans='a';
    for (int i = 0; i < 26; i++)
    {
        if (count[i]>=maxnum)
        {
            maxnum=count[i];
            ans=i + 'a';
        }
        
    }
    cout<<maxnum<<" "<<ans;
}
