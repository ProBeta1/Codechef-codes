
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ll t,n,i,j,k,p;
	cin>>t;
	while(t--)
	{
		cin>>p>>j>>k;
		p+=j;
		p/=k;
		if(p%2==0)
			cout<<"CHEF";
		else
			cout<<"COOK";
		cout<<endl;
	}	

}
