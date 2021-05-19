// searching in a matrix but the matrix is in sorteed order in both column and row
#include<iostream>

using namespace std;

int main(){
    int n ,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int key;
    cin>>key;
    bool ans=false;
    int i=0,j=m-1;
    while (i<n && j>=0)
    {
        if (a[i][j]==key)
        {
            ans=true;
            break;
        }
        else if (a[i][j]>key)
        {
            j--;
        }
        else if (a[i][j]<key)
        {
            i++;
        }
        else
        {
            ans=false;
        }
        
    }
    cout<<ans;
    
    
}