// tower of honoi using recursion
#include<iostream>
using namespace std;
void towerofhonoi(int n , char source,char dest,char helper){
    if(n==0){
        // base case 
        return;
    }
    towerofhonoi(n-1,source,helper,dest);
    cout<<"moves from "<<source<<" to "<<dest<<endl;
    towerofhonoi(n-1,helper,dest,source);
}
int main(){
    towerofhonoi(3,'A','C','B');
}