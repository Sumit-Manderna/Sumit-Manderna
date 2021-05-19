// print n num in  increasing order or deecresing order;
#include<iostream>
using namespace std;
void incresing(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    incresing(n-1);
    cout<<n<<endl;

   
}
void decreasing(int n){
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    decreasing(n-1);
}
int main()
{
    int n;
    cin>>n;
    incresing(n);
    decreasing(n);
}