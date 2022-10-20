#include<bits/stdc++.h>
using namespace std;
class students{
public:
	int rollNo;
	int std;
	students(int r,int s)  //parameterised constructor
	{
		rollNo=r;
		std=s;
	}
	students(int rollNo)  // this keyword use
	{
		this->rollNo=rollNo;
	}
	void print()
	{
		cout<<rollNo<<" "<<std<<endl;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	students s1(74,3);
	s1.print();
	students s2(3);
	s2.print();
}