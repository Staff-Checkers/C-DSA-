#include<bits/stdc++.h>
using namespace std;
void sub(string input,string output)
{
	if(input=="")
	{
		cout<<output<<endl;
	}
	else
	{
		sub(input.substr(1),output+input[0]);
		sub(input.substr(1),output);
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
	string output="";
	sub(input,output);
}