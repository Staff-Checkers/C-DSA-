#include<bits/stdc++.h>
using namespace std;
template<typename T>
class binaryTreeNode{
public:
	T data;
	binaryTreeNode<T>* left;
	binaryTreeNode<T>* right;
	binaryTreeNode(T d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
	~binaryTreeNode()
	{
		delete left;
		delete right;
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	binaryTreeNode<int>* root=new binaryTreeNode<int>(1);
	binaryTreeNode<int>* node1=new binaryTreeNode<int>(2);
	binaryTreeNode<int>* node2=new binaryTreeNode<int>(3);
	root->left=node1;
	root->right=node2;

}