/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

void printReverse(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    //Write your code here
    Node* slow=NULL;
    Node* fast=head;
    while(head!=NULL)
    {
        fast=head->next;
        head->next=slow;
        slow=head;
        head=fast;
    }
    while(slow!=NULL)
    {
        cout<<slow->data<<" ";
        slow=slow->next;
    }
}