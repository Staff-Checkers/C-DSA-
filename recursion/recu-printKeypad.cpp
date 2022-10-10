#include<bits/stdc++.h>
using namespace std;
void key(string number,vector<string>& option,string output)
{
	if(number=="")
	{
		cout<<output<<endl;
	}
	else
	{
		int x=number[0]-'0';
		string str=option[x];
		for(int i=0;i<str.length();++i)
		{
			key(number.substr(1),option,output+str[i]);
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	string number;
	cin>>number;
	vector<string> option
	{
		"",
		"",
		"abc",
		"def",
		"ghi",
		"jkl",
		"mno",
		"pqrs",
		"tuv",
		"wxyz"
	};
	string output="";
	key(number,option,output);
}