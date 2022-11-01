#include<bits/stdc++.h>
using namespace std;
template <typename T,typename Y>
class Pair{
	T x;
	Y y;
public:
	void setX(T x)
	{
		this->x=x;
	}
	void setY(Y y)
	{
		this->y=y;
	}
	T getX()
	{
		return x;
	}
	Y getY()
	{
		return y;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	// creating a pair with an integer and double(two data types).
	Pair<int,double> p1;
	p1.setX(3);
	p1.setY(7.4);
	cout<<p1.getX()<<" "<<p1.getY()<<endl;

	// creating a pair with an integer double and char(three data types).

	Pair<Pair<int,double>,char> p2;
	Pair<int,double> p3;
	p3.setX(3);
	p3.setY(8.4);
	p2.setX(p3);
	p2.setY('a');
	cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY();

}