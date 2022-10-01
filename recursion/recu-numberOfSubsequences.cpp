#include<bits/stdc++.h>
using namespace std;
int print(string input,string output,int i,int sum,int& count)
{
	if(input=="")
	{
		if(i==sum)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		int l=print(input.substr(1),output+input[0],i+input[0]-'0',sum,count);
		int r=print(input.substr(1),output,i,sum,count);
		return l+r;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	string input;
	cin>>input;
	int count=0;
	string output="";
	cout<<print(input,output,0,4,count);
}