
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
	ll t,n,i,j,k,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		char a[n][m];
		int f=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				cin>>a[i][j];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]=='.')
				{
					if((a[i+1][j]=='.' && a[i+1][j+1]=='.' && a[i][j+1]=='.' && i<n-1 && j<m-1)||
						(a[i-1][j]=='.' && a[i-1][j+1]=='.' && a[i][j+1]=='.' && i>0 && j<m-1)||
						(a[i-1][j]=='.' && a[i-1][j-1]=='.' && a[i][j-1]=='.' && i>0 && j>0)||
						(a[i+1][j]=='.' && a[i+1][j-1]=='.' && a[i][j-1]=='.' && i<n-1 && j>0))
					{;}
					else
					{
						f=1;
						break;
					}
				}
			}
			if(f)
				break;
		}
		if(f==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

}
