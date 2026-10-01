// sorting in array 
// 1 selection sort 
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
    
    for (int j = 0; j < n-1; j++)
    {
        for (int  k = j+1; k < n; k++)
        {
           
            if (array[j]>array[k])
            {
                int temp;
                temp=array[j];
                array[j]=array[k];
                array[k]=temp;
            }
            
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    

    
    
}