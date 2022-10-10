#include<bits/stdc++.h>
using namespace std;
void substring(string input,vector<string>& output)
{
	if(input=="")
	{
		output.push_back("");
		return;
	}
	else
	{
		substring(input.substr(1),output);
		int x=output.size();
		for(int i=0;i<output.size();++i)
		{
			string str=input[0]+output[i];
			output.push_back(str);
		}
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
	vector<string> output;
	substring(input,output);
	for(int i=0;i<output.size();++i)
	{
		cout<<output[i]<<endl;
	}
}