
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
	ll q,l,r,i,j;
	vector<string>v;
	v.push_back("monday");
	v.push_back("tuesday");
	v.push_back("wednesday");
	v.push_back("thursday");
	v.push_back("friday");
	v.push_back("saturday");
	v.push_back("sunday");
	ll t;
	string s,e;
	cin>>t;
	while(t--)
	{
		cin>>s>>e;
		cin>>l>>r;
		ll ans=0,c=0,id1=0,id2=0;
		for(i=0;i<7;i++)
		{
			if(v[i]==s)
				id1=i;
			if(v[i]==e)
				id2=i;
			
		}
		ll x=id2-id1+1;
		
		for(i=0;i<=500;i+=7)
		{
			if( (x+i)>=l && (x+i)<=r)
				c++,ans=x+i;;
		}
		if(c==1)
			cout<<ans<<endl;
		else if(c>1)
			cout<<"many"<<endl;
		else
			cout<<"impossible"<<endl;
	}

}
