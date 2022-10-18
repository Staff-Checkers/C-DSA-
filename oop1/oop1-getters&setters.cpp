#include<bits/stdc++.h>
using namespace std;
class students{
public:
	int rollNo;
	int std;
	void getdetails()   // getter function
	{
		cout<<rollNo<<" "<<std<<endl;
	}
	void setdetails(int r,int s)  // setter function
	{
		rollNo=r;
		std=s;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	students s1;  //creating statically
	students* s2=new students; //creating dynamically

	s1.rollNo=3;
	s1.std=10;

	s2->rollNo=74;
	s2->std=3;

	s1.setdetails(2,9);                     
	s2->setdetails(73,2);

	s1.getdetails();
	s2->getdetails();


}