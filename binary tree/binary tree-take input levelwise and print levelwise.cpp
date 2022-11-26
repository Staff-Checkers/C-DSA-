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
	binaryTreeClass<int>* root=new binaryTreeClass<int>(x);
	queue<binaryTreeClass<int>*> q;
	if(x==-1)
	{
		return NULL;
	}
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
		}
		cout<<"Enter the right node of "<<top->data<<endl;
		cin>>r;
		binaryTreeClass<int>* right=new binaryTreeClass<int>(r);
		if(r!=-1)
		{
			q.push(right);
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
	cout<<root->data<<": ";
	if(root->left!=NULL)
	{
		cout<<"L"<<root->left->data<<" ";
	}
	if(root->right!=NULL)
	{
		cout<<"R"<<root->right->data<<" ";
	}
	cout<<endl;
	print(root->left);
	print(root->right);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
binaryTreeClass<int>* root=takeInput();
print(root);

}