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

int findNode(Node *head, int n){
    // Write your code here.
    if(head==NULL)
    {
        return -1;
    }
    if(head->data==n)
    {
        return 0;
    }
    else
    {
        int ans=findNode(head->next,n);
        if(ans==-1)return -1;
        else return 1+ans;
    }
}