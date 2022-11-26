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
void treePrint(treeNode<int>* root)
{
	cout<<"root of the tree is "<<root->data<<endl;
	queue<treeNode<int>*> treeQueue;
	treeQueue.push(root);
	while(!treeQueue.empty())
	{
		treeNode<int>* topTreenode=treeQueue.front();
		treeQueue.pop();
		cout<<"No of children of "<<topTreenode->data<<" is"<<topTreenode->childNode.size()<<endl;
		for(int i=0;i<topTreenode->childNode.size();++i)
		{
			cout<<i<<"th child of node "<<topTreenode->data<<" is "<<topTreenode->childNode[i]->data<<endl;
			treeQueue.push(topTreenode->childNode[i]);
		}
	}
}
treeNode<int>* treeInput()
{
	cout<<"Enter root data"<<endl;
	int data;
	cin>>data;
	treeNode<int>* root=new treeNode<int>(data);
	queue<treeNode<int>*> treeQueue;
	treeQueue.push(root);
	while(!treeQueue.empty())
	{
		treeNode<int>* topTreenode=treeQueue.front();
		treeQueue.pop();
		int n;
		cout<<"Enter no of children of "<<topTreenode->data<<endl;
		cin>>n;
		for(int i=0;i<n;++i)
		{
			cout<<"Enter the "<<i<<"th child of node "<<topTreenode->data<<endl;
			int x;
			cin>>x;
			treeNode<int>* node=new treeNode<int>(x);
			topTreenode->childNode.push_back(node);
			treeQueue.push(node);
		}
	}
	return root;
}
int countNode(treeNode<int>* root)
{
    int ans=1;
    for(int i=0;i<root->childNode.size();++i)
    {
        ans+=countNode(root->childNode[i]);
    }
    return ans;
}
void nodesatlevel(treeNode<int>* root,int k)
{
	if(k==0)
	{
		cout<<root->data<<" ";
		return;
	}
	else
	{
		for(int i=0;i<root->childNode.size();++i)
		{
			nodesatlevel(root,k-1);
		}
	}
}
int main()
{
    treeNode<int>* root=treeInput();
    treePrint(root);
    nodesatlevel(root,2);
}
