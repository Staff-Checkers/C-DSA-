#include<bits/stdc++.h>
using namespace std;
void print(string input,string output,string option[])
{
	if(input=="")
	{
		cout<<output<<endl;
		return;
	}
	else
	{
		int one=input[0]-'0';
		print(input.substr(1),output+option[one],option);
		if(input[1]!='\0')
		{
			int two=input[1]-'0';
			one=one*10+two;
			if(one>=10&&one<=26)
			{
				print(input.substr(2),output+option[one],option);
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
	string input;
	cin>>input;
	string output="";
	string option[27]={"","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	print(input,output,option);
}