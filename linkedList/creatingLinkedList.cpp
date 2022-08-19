#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
int main()
{
    node n1(8);
    node* n2=new node(4);
    n1.next=n2;
    node* n3=new node(9);
    n2->next=n3;
    node* n4=new node(2);
    n3->next=n4;
    node* n5=new node(7);
    n4->next=n5;
    node* head=&n1;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
    
    }
}