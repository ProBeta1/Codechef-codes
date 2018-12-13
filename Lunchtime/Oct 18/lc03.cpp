
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
	ll t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],c=0,m=0;
		map<ll,ll>mp;
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			if(a[i]>m)
				m=a[i];
		}
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=min(m,mp[i]);j++)
			{
				if(mp[j]>=i && mp[i]>=j)
					c++;
			}
		}
	
		cout<<c<<"\n";
	}	

}
