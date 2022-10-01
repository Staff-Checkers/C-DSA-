#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
Node* input(int x){
	Node* head=NULL;
	Node* tail=NULL;
	while(x!=-1)
	{
		Node* newNode=new Node(x);
		if(head==NULL)
		{
			head=newNode;
			tail=newNode;
		}
		else
		{
			tail->next=newNode;
			tail=tail->next;
		}
		cin>>x;
	}
	return head;
}
void print(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
Node* remove(Node* head,int i)
{
	int count=0;
	Node* temp=head;
	Node* tail=head;
	if(i==0)
	{
		head=head->next;
		return head;
	}
	else
	{
		while(temp->next!=NULL)
		{
			if(count==i-1)
			{
				if(temp->next->next==NULL)
				{
					temp->next=NULL;
					return head;
				}
				else
				{
					Node* newNode=temp->next->next;
					temp->next=newNode;
				}
			}
			++count;
			temp=temp->next;
		}
		return head;
	}
}
int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int x;
	cin>>x;
	Node* head=input(x);
	head=remove(head,24);
	print(head);


	// int i;
	// cin>>i;
	// head=remove(head,i);

}