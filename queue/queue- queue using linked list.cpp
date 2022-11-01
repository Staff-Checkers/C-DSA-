#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node{
public:
	T data;
	Node<T>* next;
	Node(T data)
	{
		this->data=data;
		next=NULL;
	}
};
template<typename T>
class QueueLL{
	Node<T>* head;
	Node<T>* tail;
	T size;
public:
	QueueLL()
	{
		head=NULL;
		tail=NULL;
		size=0;
	}
	void enqueue(T num)
	{
		Node<T>* nodenew=new Node<T>(num);
		if(head==NULL)
		{
			head=nodenew;
			tail=nodenew;
		}
		else
		{
			tail->next=nodenew;
			tail=nodenew;
		}
		++size;
	}
	T dequeue()
	{
		T store=head->data;
		head=head->next;
		size--;
		return store;
	}
	int getSize()
	{
		return size;
	}
	T front()
	{
		return head->data;
	}
	bool isEmpty()
	{
		return size==0;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	QueueLL<int> q;
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