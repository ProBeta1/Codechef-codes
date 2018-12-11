
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll bin(ll a,ll b,ll m)
{
	ll res=1;
	while(b>0)
	{
		if(b&1)
		{
			res=(res*a)%m;
		}
		a=(a*a)%m;
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
	ll r,n,i,j,t;
	cin>>t;
	ll a[30]={0};
	a[4]=5;
	ll pre=5,f=2;
	for(i=5;i<27;i++)
	{
		if(i%2==1)
		{
			a[i]=(pre*2 +1);
		}
		else
		{
			a[i]=(pre*4+1);
		}
		f--;
		if(f==0)
		{
			f=2;
			pre=a[i];
		}
	}
	while(t--)
	{
		cin>>n;
		if(n<3)
			cout<<1<<" "<<pow(2,n)<<" ";
		else if(n==3)
		{
			cout<<"3 8 ";
		}
		else if(n==4)
		{
			cout<<"5 16 ";
		}
		else
			cout<<a[n]<<" "<<bin(2,n,mod)<<" ";
	}
}
