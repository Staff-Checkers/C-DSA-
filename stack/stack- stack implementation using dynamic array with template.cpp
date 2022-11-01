#include<bits/stdc++.h>
using namespace std;
template <typename T>
class stackArray{
	T* data;
	int nextIndex;
	int capacity;
public:
	stackArray()
	{
		data=new T[5];
		nextIndex=0;
		capacity=5;
	}
	bool isEmpty()
	{
		return (nextIndex==0);
	}
	void push(T num)
	{
		if(nextIndex==capacity)
		{
			T* narray=new T[capacity*2];
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
	T pop()
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
	T top()
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
	stackArray<char> s;
	s.push('a');
	s.push('k');
	s.push('a');
	s.push('s');
	s.push('h');
	s.push('o');
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.isEmpty();

}