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
node* takeinput()
{
    int x;
    cin>>x;
    node* head=NULL;
    node* tail=NULL;
    while(x!=-1)
    {
        node* newnode=new node(x);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        cin>>x;s
    }
    return head;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node* head=takeinput();
    print(head);
}

