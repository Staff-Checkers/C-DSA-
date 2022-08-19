#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node* n1=new node(8);
    node* n2=new node(4);
    node* n3=new node(9);
    node* n4=new node(2);
    node* n5=new node(6);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    print(n1);
}
