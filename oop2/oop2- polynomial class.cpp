#include<bits/stdc++.h>
using namespace std;
class Polynomial {
public:
    int *degCoeff;      // Name of your array (Don't change this)
    
    // Complete the class
     int size;
    Polynomial(){
        degCoeff=new int[5]{0};
        size=5;
    }
    void setCoefficient(int d,int c)
    {
        if(d>=size)
        {
            int s=d/size;
            s=s+1;
            int *arr=new int[size*s]{0};
            for(int i=0;i<size;++i)
            {
                arr[i]=degCoeff[i];
            }
            delete [] degCoeff;
            degCoeff=arr;
            size=size*s;
        }
        degCoeff[d]=c;
    }
    void print()
    {
        for(int i=0;i<size;++i)
        {
            if(degCoeff[i]!=0)
            {
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }

        }
        cout<<endl;
    }
    Polynomial(const Polynomial &p)
    {
        int* arr=new int[p.size]{0};
        for(int i=0;i<p.size;++i)
        {
            arr[i]=p.degCoeff[i];
        }
        degCoeff=arr;
        size=p.size;
    }
    Polynomial operator=(const Polynomial &p)
    {
        int* arr=new int[p.size]{0};
        for(int i=0;i<p.size;++i)
        {
            arr[i]=p.degCoeff[i];
        }
        degCoeff=arr;
        size=p.size;
    }
    Polynomial operator+(const Polynomial &p)
    {
        int x=max(size,p.size);
        int* arr=new int[x]{0};
        for(int i=0;i<size;++i)
        {
            arr[i]+=degCoeff[i];
        }
        for(int j=0;j<p.size;++j)
        {
            arr[j]+=p.degCoeff[j];
        }
        Polynomial p1;
        p1.degCoeff=arr;
        p1.size=x;
        return p1;
    }
     Polynomial operator-(const Polynomial &p)
    {
        for(int i=0;i<p.size;++i)
        {
            p.degCoeff[i]=p.degCoeff[i]*-1;
        }
        Polynomial p3=(*this)+p;
        return p3;
        
    }
    
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	Polynomial p1;
	p1.setCoefficient(1,1);
	p1.setCoefficient(3,2);
	p1.setCoefficient(9,3);
	p1.setCoefficient(89,3);
	cout<<p1.size<<endl;
	p1.print();

}

