#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int fibo(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;
	cout<<fibo(n);
}