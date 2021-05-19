// checking the character value is palamdrome or not
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n + 1];
    cin >> a;
    int start = 0;
    bool ans=true;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=a[n-1-i])
        {
            ans=false;
            break;
        }
        
    }
    if (ans==true)
    {
        cout<<"cahracter is palamdrom";
    }
    else
    {
        cout<<"character is not a palamdrom"; 

    }
    
}