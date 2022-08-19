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

void printIthNode(Node *head, int i)
{
    //Write your code here
    int count=0;
    while(head!=NULL)
    {
        if(count==i)
        {
            cout<<head->data<<endl;
            break;
        }
        else
        {
            ++count;
            head=head->next;
        }
    }
}
