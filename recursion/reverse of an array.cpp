#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

// void reverse(int* arr,int si,int ei)
// {
// 	if(si>=ei)
// 	{
// 		return;
// 	}
// 	else
// 	{
// 		swap(arr[si],arr[ei]);
// 		reverse(arr,si+1,ei-1);
// 	}
// }

void reverse(int* arr,int si,int n)
{
	if(si>=n/2)
	{
		return;
	}
	else
	{
		swap(arr[si],arr[n-si-1]);
		reverse(arr,si+1,n);
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	// int n;
	// cin>>n;
	// int* arr=new int[n];
	// for(int i=0;i<n;++i)
	// {
	// 	cin>>arr[i];
	// }
	// int si=0;
	// int ei=n-1;
	// reverse(arr,si,ei);

	// for(int i=0;i<n;++i)
	// {
	// 	cout<<arr[i]<<" "; 
	// }
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	reverse(arr,0,n);

	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" "; 
	}
}