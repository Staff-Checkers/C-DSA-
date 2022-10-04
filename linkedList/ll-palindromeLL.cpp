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
Node* reverse(Node* head)
{
    Node* slow=NULL;
    Node* fast=head;
    while(head!=NULL)
    {
        fast=head->next;
        head->next=slow;
        slow=head;
        head=fast;
    }
    return slow;
}
bool isPalindrome(Node *head)
{
    //Write your code here
    if(head==NULL)
    {
        return true;
    }
    int count=1;
    Node* start=head;
    Node* fast=head;
    Node* slow=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    Node* temp=reverse(slow->next);
    while(temp!=NULL)
    {
        if(temp->data!=start->data)
        {
            return false;
        }
        temp=temp->next;
        start=start->next;
    }
    return true;
    
    
    
}