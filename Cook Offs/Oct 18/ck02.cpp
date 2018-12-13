
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
	ll t,n,i,j,m;
	cin>>t;
	string s,p;
	while(t--)
	{
		ll zr=0,on=0;
		cin>>n>>p;
		for(i=0;i<n;i++){
			cin>>s;
			m=s.size();
			if(s[0]==s[m-1])
			{
				if(s[0]=='0')
					zr++;
				else
					on++;
			}
		}
		if(zr==on)
		{
			cout<<p<<endl;
		}
		else if(zr<on)
		{
			cout<<"Dee\n";
		}
		else
			cout<<"Dum\n";
	}	

}
