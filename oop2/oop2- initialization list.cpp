#include<bits/stdc++.h>
using namespace std;
class students{
	const int rollno;
	int age;
public:
	students(int r,int a):rollno(r){
		age=a;
	}
	void print()
	{
		cout<<rollno<<" "<<age<<endl;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	students s1(74,20);
	s1.print();
	
}