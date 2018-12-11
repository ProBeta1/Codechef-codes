
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
	ll t,n,i,j,a,b,c,d,x;
	cin>>t;
	while(t--)
	{
		cin>>a;
		set<ll>st;
		set<ll>vt;
		int f=1;
		while(a--)
		{
			cin>>x;
			st.insert(x);
		}
		cin>>b;
		while(b--)
		{
			cin>>x;
			vt.insert(x);
		}
		cin>>c;
		while(c--)
		{
			cin>>x;
			if(st.find(x)==st.end())
				f=0;
		}
		cin>>d;
		while(d--)
		{
			cin>>x;
			if(vt.find(x)==vt.end())
				f=0;
		}
		if(f)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}

}
