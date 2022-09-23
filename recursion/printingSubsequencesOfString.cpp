#include<bits/stdc++.h>
using namespace std;
void print(string str,int index,int length,string output)
{
	if(index>=length)
	{
		cout<<output<<endl;
		return;
	}
	else
	{
		print(str.substr(1),index+1,length,output);
		print(str.substr(1),index+1,length,output+str[0]);
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	string str;
	cin>>str;
	string output="";
	print(str,0,str.length(),output);
}