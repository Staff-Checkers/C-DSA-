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

Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        if(pos==0)
        {
            Node* newNode=head->next;
            Node* temp=head;
            delete temp;
            return newNode;
        }
        else
        {
            Node* ans=deleteNodeRec(head->next,pos-1);
            head->next=ans;
            return head;
        }
    }
}