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
	QueueArray()
	{
		arr=new T[5];
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
			T* narray= new T[capacity*2];
			int j=0;
			for(int i=firstIndex;i<capacity;++i)
			{
				narray[j]=arr[i];
				++j;
			}
			for(int i=0;i<firstIndex;++i)
			{
				narray[j]=arr[i];
				++j;
			}
			nextIndex=size;
			capacity*=2;
			delete[] arr;
			arr=narray;
			firstIndex=0;
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
	QueueArray<int>q;
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