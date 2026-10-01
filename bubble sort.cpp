// bubble sorting in array;
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    // bubble sort 
    int counter =0;
    while (counter<n)
    {
        for (int i = 0; i < n-counter-1; i++)
        {
            if (array[i]>array[i+1])
            {
                
                int temp;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
            
        }
        counter+=1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    

}