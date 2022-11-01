#include<bits/stdc++.h>
using namespace std;
class stackArray{
	int* data;
	int nextIndex;
	int capacity;
public:
	stackArray(int totalsize)
	{
		data=new int[totalsize];
		nextIndex=0;
		capacity=totalsize;
	}
	bool isEmpty()
	{
		return (nextIndex==0);
	}
	void push(int num)
	{
		if(nextIndex==capacity)
		{
			cout<<"Stack is full!"<<endl;
		}
		else
		{
			data[nextIndex]=num;
			++nextIndex;
		}
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
	stackArray s(5);
	s.push(8);
	s.push(4);
	s.push(9);
	s.push(1);
	s.push(2);
	cout<<s.top();a

}