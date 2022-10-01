#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	string input;
	cin>>input;
	int n=input.length();
	int size=pow(2,n);
	for(int i=0;i<size;++i)
	{
		string output="";
		for(int j=0;j<n;++j)
		{
			if(i&(1<<j))
			{
				output=output+input[j];
			}
		}
		cout<<output<<endl;
	}

}