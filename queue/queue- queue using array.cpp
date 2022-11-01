#include<bits/stdc++.h>
using namespace std;
template <typename T>
class QueueArray{
	T* arr;
	int size;
	int nextIndex;
	int firstIndex;
	int capacity;
public:
	QueueArray(int x)
	{
		arr=new T[x];
		size=0;
		nextIndex=0;
		firstIndex=-1;
		capacity=5;
	}
	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		return size==0;
	}
	void enqueue(T data)
	{
		if(size==capacity)
		{
			cout<<"Queue is full"<<endl;
			return;
		}
		arr[nextIndex]=data;
		nextIndex=(nextIndex+1)%capacity;
		if(firstIndex==-1)
		{
			firstIndex=0;
		}
		++size;
	}
	T front()
	{
		return arr[firstIndex];
	}
	T dequeue()
	{
		if(size==0)
		{
			cout<<"queue is empty"<<endl;
			return -1;
		}
		else
		{
			T x=arr[firstIndex];
			firstIndex=(firstIndex+1)%capacity;
			size=size-1;
			if(size==0)
			{
				firstIndex=-1;
				nextIndex=0;
			}
			return x;
		}
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	QueueArray<int>q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);

	cout<<q.front()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.getSize()<<endl;
	cout<<q.isEmpty()<<endl;
}