#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("C:/Users/akash/OneDrive/Desktop/competetive coding/input.txt","r",stdin);
	freopen("C:/Users/akash/OneDrive/Desktop/competetive coding/output.txt","w",stdout);
#endif

	int n;
	cin>>n;
	int ans=fact(n);
	cout<<ans;
}