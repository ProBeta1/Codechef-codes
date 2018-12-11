
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define sz 100005
ll dtprm[sz];
bool isp[sz];
void fun()
{
	ll i,j;
	memset(dtprm,0,sizeof(dtprm));
	memset(isp,true,sizeof(isp));
	for(i=2;i<sz;i++)
	{
		if(isp[i])
		{
			for(j=i;j<sz;j+=i)
			{
				isp[j]=false;
				dtprm[j]++;
			}
		}
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	fun();
	ll t,n,i,j,x;
	cin>>t;
	ll a[sz];
	while(t--)
	{
		cin>>n;
		ll res=0,c=0;
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++){
			cin>>x;
			a[x]++;
		}
		for(i=2;i<sz;i++)
		{
			c=0;
			for(j=i;j<sz;j+=i)
			{
				c+=(a[j]);
			}
			res=max(res,c*(dtprm[i]));
		}
		cout<<res<<endl;
	}

}
