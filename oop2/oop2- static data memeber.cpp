#include<bits/stdc++.h>
using namespace std;
class students{
	int rollno;
	int age;
	static int totalstudents;
public:
	students(int r,int a)
	{
		rollno=r;
		age=a;
		++totalstudents;
	}
	static void print()
	{
		cout<<totalstudents<<endl;
	}
};
int students::totalstudents=0;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	students s1(3,19);
	students s2(74,20);
	students::print();

}