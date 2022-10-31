#include<bits/stdc++.h>
using namespace std;
class dArray{
public:
	int* array;
	int nIndex;
	int size;
	dArray()
	{
		array=new int[5];
		nIndex=0;
		size=5;
	}
	void add(int num)
	{
		if(nIndex==size)
		{
			int* arr=new int[size*2];
			for(int i=0;i<size;++i)
			{
				arr[i]=array[i];
			}
			delete [] array;
			array=arr;
			size=size*2;
		}
		array[nIndex]=num;
		++nIndex;
	}
	int get(int index)
	{
		if(index<nIndex)
		{
			return array[index];
		}
		return -1;
	}
	void print()
	{
		for(int i=0;i<nIndex;++i)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	void replace(int num,int index)
	{
		if(index<=nIndex)
		{
			if(index==nIndex)
			{
				add(num);
			}
			else
			{
				array[index]=num;
			}		
		}
		return;
	}
	dArray(const dArray &d)
	{
		array=new int[d.size];
		nIndex=d.nIndex;
		for(int i=0;i<d.size;++i)
		{
			array[i]=d.array[i];
		}
	}
	dArray operator=(const dArray &d)
	{
		array=new int[d.size];
		nIndex=d.nIndex;
		for(int i=0;i<d.size;++i)
		{
			array[i]=d.array[i];
		}
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	dArray d;
	d.add(8);
	d.add(4);
	d.add(9);
	d.add(2);
	d.add(9);
	d.add(7);
	d.replace(8,6);
	dArray d3;
	d3=d;
	dArray d2(d);
	d.replace(0,0);
	d3.print();
	d.print(); 
}