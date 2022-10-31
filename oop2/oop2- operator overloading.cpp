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
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	fraction f1(1,2);
	fraction f2(3,2);
	fraction f3=f1.add(f2);
	f3.print();
	fraction f4=f1+f2;
	f4.print();
	fraction f5=f1*f2;
	f5.print();
	if(f3==f5)
	{
		cout<<"equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
}