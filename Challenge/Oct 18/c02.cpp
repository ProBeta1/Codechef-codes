
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bin(ll a,ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b&1)
			res=(res*a);
		a=(a*a);
		b/=2;
	}
	return res;	
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ll t,n,i,j,k,p,x,y,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n--;
		if(n<26)
		{
			if(n<2)
				cout<<"1 0 0"<<endl;
			else if(n<10)
				cout<<"0 1 0"<<endl;
			else if(n<26)
				cout<<"0 0 1"<<endl;
			continue;
		}
		if(n%26==0)
		{
			cout<<bin(2,n/26);
		}
		else if((n-1)%26==0){
			cout<<bin(2,(n-1)/26);
		}
		else
			cout<<0;
		cout<<" ";
		ll z=n-2;
		int f=0;
		for(;z>n-10;z--)
			if(z%26==0)
			{
				f=1;
				break;
			}
		if(f)
			cout<<bin(2,z/26);
		else cout<<0;
		cout<<" ";
		z=n-10;
		f=0;
		for(;z>n-26;z--)
			if(z%26==0)
			{
				f=1;
				break;
			}
		if(f)
			cout<<bin(2,z/26);
		else
			cout<<0;
		cout<<" ";
		cout<<endl;
	}	
}
