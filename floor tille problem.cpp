// the no of ways to aplly a tile 2*1 on theon a floor 2*n; 
#include<iostream>

using namespace std;

int tileways(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return (tileways(n-1)+tileways(n-2));
}
int main(){
    cout<<tileways(4);0
}