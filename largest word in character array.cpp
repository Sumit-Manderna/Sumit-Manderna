// largest word ina sentence in a character array
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int current=0;
    int maxcharacter=INT_MIN;
    int st=0 , maxst=0;
    while(1)
    {
        if (a[i]==' ' || a[i]=='\0')
        {
            if (current>maxcharacter)
            {
                maxcharacter=current;
                maxst=st;
            }
            current=0;
            st=i+1;
            
        }
        else
        current++;
        if (a[i]=='\0')
        {
            break;
        }
        
        i++;
    }
    cout<<maxcharacter<<endl;
    for (int i =maxst; i < maxst+maxcharacter; i++)
    {
        cout<<a[i];
    }
    
}