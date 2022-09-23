#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

bool pali(string s,int i,int n)
{
	if(i>=n/2)
	{
		return true;
	}
	else
	{
		if(s[i]!=s[n-i-1])
		{
			return false;
		}
		else
		{
			return pali(s,i+1,n);
		}
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	string s;
	cin>>s;
	int n=s.length();
	cout<<pali(s,0,n);

}