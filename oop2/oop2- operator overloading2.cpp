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
	fraction add(const fraction &f)
	{
		int x=(numerator*f.denominator)+(denominator*f.numerator);
		int y=denominator*f.denominator;
		fraction f3(x,y);
		f3.simplify();
		return f3;
	}
	fraction operator+(const fraction &f)
	{
		int x=(numerator*f.denominator)+(denominator*f.numerator);
		int y=denominator*f.denominator;
		fraction f3(x,y);
		f3.simplify();
		return f3;
	}
	fraction operator*(const fraction &f)
	{
		int x=numerator*f.numerator;
		int y=denominator*f.denominator;
		fraction f3(x,y);
		f3.simplify();
		return f3;
	}
	void multiply(fraction const &f)
	{
		numerator=numerator*f.numerator;
		denominator=denominator*f.denominator;
		simplify();
	}
	bool operator==(const fraction &f)
	{
		return(numerator==f.numerator&&denominator==f.denominator);
	}
	fraction& operator++()
	{
		numerator=numerator+denominator;
		simplify();
		return *this;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fraction f1(10,2);
	fraction f3=++(++f1);
	f1.print();
	f3.print();
}