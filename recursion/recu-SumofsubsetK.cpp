#include<bits/stdc++.h>
using namespace std;
void sub(vector<int>& input,int si,int size,vector<int>& ds,vector<vector<int>>& output,int sum,int n)
{
	if(sum==n)
	{
		output.push_back(ds);
		return;
	}
	if(si==n||sum>n)
	{
		return;
	}
	else
	{
		ds.push_back(input[si]);
		sub(input,si+1,size,ds,output,sum+input[si],n);
		ds.pop_back();
		sub(input,si+1,size,ds,output,sum,n);
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	vector<int>input{1,2,3,4};
	vector<int>ds;
	vector<vector<int>>output;
	sub(input,0,4,ds,output,0,6);
	int x=output.size();
	for(int i=0;i<x;++i)
	{
		int p=output[i].size();
		for(int j=0;j<p;++j)
		{
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}
}