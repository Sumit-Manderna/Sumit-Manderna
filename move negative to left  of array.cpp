// moave all the negative element to the left side of the __ARRAY_OPERATO
#include"bits/stdc++.h"

using namespace std;

int main(){
    int arr[]={-67,-5,-8,5,3,6,-3,-34,-54,-6};
    int n=10;
    // sort(arr,arr+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int i=0;
        for (int  j = 0; j < n; j++)
        {
            if(arr[j]<0){
                if(j!=i){
                    swap(arr[i],arr[j]);
                    i++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
    



}