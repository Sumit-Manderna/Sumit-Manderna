// to get permutation by stl trick 
#include"bits/stdc++.h"
using namespace std;

int main(){

    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
    }
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(),a.end()));
    
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }   


}