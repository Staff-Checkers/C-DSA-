#include<bits/stdc++.h>
using namespace std;
void print(vector<int>& input,vector<int>& ds,int freq[])
{
	if(ds.size()==input.size())
	{
		for(int i=0;i<ds.size();++i)
		{
			cout<<ds[i]<<" ";
		}
		cout<<endl;
		return;
	}
	else
	{
		for(int i=0;i<input.size();++i)
		{
			if(freq[i]!=1)
			{
				ds.push_back(input[i]);
				freq[i]=1;
				print(input,ds,freq);
				ds.pop_back();
				freq[i]=0;
			}

		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	vector<int> input {1,2,3};
	vector<int>ds;
	int freq[input.size()]={0};
	print(input,ds,freq);
}