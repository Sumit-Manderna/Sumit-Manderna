// to do list
// return true if you are able to do work on the list on the next day 
#include <iostream>
using namespace std;

int main() {
	int N,X;
	cin>>N>>X;
	int arr[N];
	int sum=0;
	for (int  i=0;i<N;i++) {
	    cin>>arr[i];
	    sum+=arr[i];
	}
	if((sum+X)<25)
	{
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;
}