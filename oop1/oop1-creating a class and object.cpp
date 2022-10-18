#include<bits/stdc++.h>
using namespace std;
class students{
public:
	int rollNo;
	int std;
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	students s1;
	s1.rollNo=74;
	s1.std=2;
	cout<<s1.rollNo<<endl;
	cout<<s1.std<<endl;
}