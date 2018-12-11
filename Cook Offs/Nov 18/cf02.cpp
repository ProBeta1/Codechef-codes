
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
		string s;
		ll r=0,g=0,m,pr,pg,ar,ag,c,d;
		cin>>s;
		n=s.size();
		pr=pg=ar=ag=0;
		c=d=0;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='R'){
				r++;
				pr++;
				if(pg==2)
					c++;
				ag=max(ag,pg);
				pg=0;
			}
			else{
				g++;
				pg++;
				if(pr==2)
					d++;
				ar=max(ar,pr);
				pr=0;
			}

		}
			ag=max(ag,pg);
			ar=max(ar,pr);
			if(  (s[0]=='R' &&s[n-1]=='R' && s[n-2]=='R') || (s[0]=='G' &&s[n-1]=='G' && s[n-2]=='G')   )
				ar=ag=3;
			if(  (s[0]=='R' &&s[1]=='R' && s[n-1]=='R') || (s[0]=='G' &&s[1]=='G' && s[n-1]=='G')   )
				ar=ag=3;
			if( (s[0]=='R' && s[n-1]=='R')  )
				d++;
			if(s[0]=='G' && s[n-1]=='G') 
				c++;
		if(r!=g || ar>2 || ag>2 || c>1 || d>1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}

}
