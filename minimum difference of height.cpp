// Given an array arr[] denoting heights of N towers and a positive integer K, you have
//  to modify the height of each tower eitherby increasing or decreasing them by K only once.
// After modifying, height should be a non-negative integer. 
// Find out what could be the possible minimum difference of the height of shortest and longest
//  towers after you have modified each tower.
#include"bits/stdc++.h"
using namespace std;

int get_minimum_height(int arr[],int n,int k){
        sort(arr, arr+n);
        int min_elem, max_elem;
        int ans = arr[n-1] - arr[0];
        
        for (int i=1 ; i<=n-1; i++){
            if (arr[i] >= k){
                max_elem = max(arr[i-1] + k, arr[n-1] - k );
                min_elem = min(arr[0] + k, arr[i] - k );
                //cout << max_elem << " "<< min_elem<< endl;
                ans = min(ans, max_elem - min_elem);
            }
            else continue;
        }
        return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<get_minimum_height(arr,n,k);
}
