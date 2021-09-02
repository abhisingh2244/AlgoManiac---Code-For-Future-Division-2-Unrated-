#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,l;
	    cin>>n>>k>>l;
	    int a[n];
	    int mx=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(i !=n-1)
	        {
	            mx=max(mx,a[i]);
	        }
	    }
	    int speed=k*(l-1)+a[n-1];
	    if(mx<speed || mx<a[n-1])
	    {
	        cout<<"Yes"<<endl;
	        
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
