#include<bits/stdc++.h>
using namespace std;
class students{
	int rollno;
public:
	char* name;
	students(int r,char* n)
	{
		rollno=r;
		name=new char[strlen(n)+1];  //deep copy
		strcpy(name,n);
	}
	void print()
	{
		cout<<name<<" "<<rollno<<endl;
	}
	students(const students &s)          //copy constructor deep copy
	{
		rollno=s.rollno;
		name=new char[strlen(s.name)+1];
		strcpy(name,s.name);
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char name[]="oshin";
	students s1(20,name);
	students s2(s1);
	s1.name[0]='t';
	s2.print();

}