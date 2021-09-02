#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    vector<int> b=a;
	    sort(b.begin(),b.end());
	    int ans=b[n-1-k/2];
	    cout<<ans<<endl;
	    unordered_set<int> ava;
	    for(int i=n-1;i>=n-k;i--)
	     ava.insert(b[i]);
	    int j=0;
	    for(int i=0;i<n;i++)
	      {
	          if(ava.find(a[i])!=ava.end())
	          {
	              cout<<a[i]<<" ";
	              j++;
	              if(j==k)
	               break;
	          }
	        
	      }
	      cout<<endl;
	    
	    
	    
	}
	return 0;
}