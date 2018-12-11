
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
	ll t,n,x,i,j;
	ll a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n+2],c=0,f=0;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		map<ll,ll>mp;
		map<ll,ll>::iterator it;
		for(i=1;i<=n;i++)
		{
			x=a[a[i]];
			it=mp.find(x);
			if(mp.find(x)!=mp.end())
			{
				if(it->second!=a[i]){
					f=1;
					//cout<<it->second<<" ";
				}
				//f=1;
			}
			mp[x]=a[i];
			
		}
		if(f)
			cout<<"Truly Happy"<<endl;
		else
			cout<<"Poor Chef"<<endl;
	}	

}
