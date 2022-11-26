#include<bits/stdc++.h>
using namespace std;
template<typename T>
class treeNode{
public:
	T data;
	vector<treeNode<T>*> childNode;
	treeNode(T d)
	{
		data=d;
	}

};
treeNode<int>* treeInput()
{
	cout<<"Enter data"<<endl;
	int data;
	cin>>data;
	treeNode<int>* root=new treeNode<int>(data);
	cout<<"Enter no of children"<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		treeNode<int>* child=treeInput();
		root->childNode.push_back(child);
	}
	return root;
}
void printTree(treeNode<int>* root)
{
	if(root==NULL)return;
	cout<<root->data<<":";
	for(int i=0;i<root->childNode.size();++i)
	{
		cout<<root->childNode[i]->data<<" ";
	}
	cout<<endl;
	for(int i=0;i<root->childNode.size();++i)
	{
		printTree(root->childNode[i]);
	}
}
int main()
{
treeNode<int>* root=treeInput();
printTree(root);
}
