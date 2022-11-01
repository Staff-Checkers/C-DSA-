#include<bits/stdc++.h>
using namespace std;
class stackArray{
	int* data;
	int nextIndex;
	int capacity;
public:
	stackArray()
	{
		data=new int[5];
		nextIndex=0;
		capacity=5;
	}
	bool isEmpty()
	{
		return (nextIndex==0);
	}
	void push(int num)
	{
		if(nextIndex==capacity)
		{
			int* narray=new int[capacity*2];
			for(int i=0;i<capacity;++i)
			{
				narray[i]=data[i];
			}
			delete[] data;
			data=narray;
			capacity*=2;
		}
			data[nextIndex]=num;
			++nextIndex;
	}
	int pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
			return -1;
		}
		--nextIndex;
		return data[nextIndex];

	}
	int size()
	{
		return nextIndex;
	}
	int top()
	{
		if(isEmpty())
		{
			return -1;
		}
		return data[nextIndex-1];
	}

};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	stackArray s;
	s.push(8);
	s.push(4);
	s.push(9);
	s.push(1);
	s.push(2);
	s.push(9);
	cout<<s.size();

}