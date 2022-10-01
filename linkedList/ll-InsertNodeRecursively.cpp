#include<bits/stdc++.h>
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
void print(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
void input(Node* head,int x)
{
	cin>>x;
	if(x==-1)
	{
		return;
	}
	else
	{
		Node* newNode=new Node(x);
		head->next=newNode;
		input(head->next,x);
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int x;
	cin>>x;
	Node* head=new Node(x);
	input(head,x);
	print(head);

}