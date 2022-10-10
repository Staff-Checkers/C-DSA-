#include<bits/stdc++.h>
using namespace std;
key(int number,vector<string>& option,vector<string>& output)
{
	if(number==0)
	{
		output.push_back("");
	}
	else
	{
		vector<string> smallOutput;
		key(number/10,option,smallOutput);
		int x=smallOutput.size();
		string str=option[number%10];
		for(int i=0;i<str.length();++i)
		{
			for(int j=0;j<x;++j)
			{
				string s=smallOutput[j]+str[i];
				output.push_back(s);
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

	int number;
	cin>>number;
	vector<string> option
	{
		{""},
		{""},
		{"abc"},
		{"def"}
	};
	vector<string> output;
	key(number,option,output);
	int s=output.size();
	for(int i=0;i<s;++i)
	{
		cout<<output[i]<<endl;
	}

}