#include<bits/stdc++.h>
using namespace std;
template <typename T>
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
template <typename T>
class stackLL{
	Node<T>* head;
	int size;
public:
	stackLL()
	{
		head=NULL;
		size=0;
	}
	void push(T num)
	{
		Node<T>* n=new Node<T>(num);
		n->next=head;
		head=n;
		++size;
	}
	int totalsize()
	{
		return size; 
	}
	bool isEmpty()
	{
		return (head==NULL);
	}
	T pop()
	{
		if(head==NULL)
		{
			return -1;
		}
		else
		{
			T x=head->data;
			head=head->next;
			size--;
			return x;
		}
	}
	T top()
	{
		if(head==NULL)
		{
			return -1;
		}
		else
		{
			return head->data;
		}
	}
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	stackLL<char> s;
	s.push('a');
	s.push('k');
	s.push('a');
	s.push('s');
	cout<<s.totalsize()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.totalsize()<<endl;
}






