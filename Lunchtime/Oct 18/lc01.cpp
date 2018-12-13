
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
	int t,n,i,j,x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		if(x==(y+z) || y==(x+z) || z==(x+y))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}	

}
