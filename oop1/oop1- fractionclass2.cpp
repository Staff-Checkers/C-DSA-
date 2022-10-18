#include<bits/stdc++.h>
using namespace std;
class fraction{
	int numerator;
	int denominator;
public:
	fraction(int num,int den)
	{
		numerator=num;
		denominator=den;
	}
	void simplify()
	{
		int num=1;
		int x=min(numerator,denominator);
		for(int i=1;i<=x;++i)
		{
			if(numerator%i==0&&denominator%i==0)
			{
				num=i;
			}
		}
		numerator=numerator/num;
		denominator=denominator/num;
	}
	void print()
	{
		
		cout<<numerator<<"/"<<denominator<<endl;
	}
	void add(fraction const &f)
	{
		numerator=(numerator*f.denominator)+(denominator*f.numerator);
		denominator=denominator*f.denominator;
		simplify();
	}
	void multiply(fraction const &f)
	{
		numerator=numerator*f.numerator;
		denominator=denominator*f.denominator;
		simplify();
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fraction f1(3,4);
	fraction f2(2,5);
	f1.multiply(f2);
	f1.print();
}