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
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
treeNode<int>* root=new treeNode<int>(8);
treeNode<int>* node1=new treeNode<int>(4);	  
treeNode<int>* node2=new treeNode<int>(9);
root->childNode.push_back(node1);
root->childNode.push_back(node2);
printTree(root);
}