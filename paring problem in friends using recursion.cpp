// find the no of ways inwhich n friends
//  can remain single or can be paired up
#include<iostream>
using namespace std;

int friendpair(int n){

    if (n==0 || n==1 || n==2)
    {
        return n;
    }
    return friendpair(n-1)+friendpair(n-2)*(n-1);
    
}
int main(){
    cout<<friendpair(4);
}