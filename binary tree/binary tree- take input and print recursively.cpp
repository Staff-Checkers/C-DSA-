#include<bits/stdc++.h>
using namespace std;
template<typename T>
class binaryTreeClass{
public:
	T data;
	binaryTreeClass<T>* root;
	binaryTreeClass<T>* left;
	binaryTreeClass<T>* right;
	binaryTreeClass(T d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
binaryTreeClass<int>* takeInput()
{
	cout<<"Enter the root data :"<<endl;
	int x;
	cin>>x;
	if(x==-1)
	{
		return NULL;
	}
	binaryTreeClass<int>* root=new binaryTreeClass<int>(x);
	queue<binaryTreeClass<int>*> q;
	q.push(root);
	while(!q.empty())
	{
		binaryTreeClass<int>* top=q.front();
		q.pop();
		cout<<"Enter the left node of "<<top->data<<endl;
		int l,r;
		cin>>l;
		binaryTreeClass<int>* left=new binaryTreeClass<int>(l);
		if(l!=-1)
		{
			q.push(left);
			top->left=left;
		}
		else
		{
			top->left=NULL;
		}
		cout<<"Enter the right node of "<<top->data<<endl;
		cin>>r;
		binaryTreeClass<int>* right=new binaryTreeClass<int>(r);
		if(r!=-1)
		{
			q.push(right);
			top->right=right;
		}
		else
		{
			top->right=NULL;
		}
	}
	return root;

}
void print(binaryTreeClass<int>* root)
{
	if(root==NULL)
	{
		return;
	}
	queue<binaryTreeClass<int>*> q;
	q.push(root);
	while(!q.empty())
	{
		binaryTreeClass<int>* front=q.front();
		q.pop();
		cout<<front->data<<": ";
		if(front->left!=NULL)
		{
			q.push(front->left);
			cout<<"L "<<front->left->data<<" ";
		}
		if(front->right!=NULL)
		{
			q.push(front->right);
			cout<<"R "<<front->right->data<<" ";
		}
		cout<<endl;
	}
}
int main()
{
binaryTreeClass<int>* root=takeInput();
print(root);

}
