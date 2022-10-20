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
	~students()
	{
		cout<<"destructor called!"<<endl;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	students s1(75,3);
	s1.print();
	students s2(s1); // copy constructor
	//static to static copy
	s2.print();

	students* s3=new students(s2); //static to dynamic copy
	s3->print();

	students* s4=new students(*s3); // dynamic to dynamic copy
	s4->print();

	students s5(*s4);
	s5.print();


	students s6(12,23); //copy assignment operator  
	s1=s6;               
	s1.print();

	students* s7=new students(24,30);
	*s7=*s4;
	s7->print();
	delete s3;
	delete s4;
	delete s7;







}