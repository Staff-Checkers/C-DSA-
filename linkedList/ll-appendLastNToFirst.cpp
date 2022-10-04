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

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(n==0||head==NULL)
    {
        return head;
    }
    else
    {
        Node* fast=head;
        Node* slow=head;
        Node* temp=head;
        for(int i=0;i<n;++i)
        {
            if(fast==NULL)return NULL;
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        temp=slow->next;
        fast->next=head;
        slow->next=NULL;
        return temp;
    }
}