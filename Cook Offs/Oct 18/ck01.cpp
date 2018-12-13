
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
	ll t,n,k,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[n+1]={0},c=0;
		for(i=1;i<=n;i++){
			cin>>a[i];
			{
				if(a[i]-a[i-1]>k)
				{
					c+=( (a[i]-a[i-1]-1)/k);
				}
			}
		}
		cout<<c<<"\n";

	}	

}
