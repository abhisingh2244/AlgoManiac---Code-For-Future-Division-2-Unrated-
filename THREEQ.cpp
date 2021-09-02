#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3],b[3],suma=0,sumb=0;
	    for(int i=1;i<=3;i++)
	    {
	        cin>>a[i];}
	        for(int i=1;i<=3;i++){
	        cin>>b[i];
	        }
	       {
	        suma =a[1]+a[2]+a[3];
	        sumb =b[1]+b[2]+b[3];
	    }
	    if(suma==sumb){
	    cout<<"Pass"<<endl;}
	    else
	    cout<<"Fail"<<endl;
	}
	return 0;
}
