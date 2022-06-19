#include<iostream>
#include<vector>
#include<map>
using namespace std;
struct Node
{
	struct Node *left;
	int data;
	struct Node *right;
	
	Node(int data)
	{
		this->data=data;
		this->left=this->right=nullptr;
	}
};
struct NodeInfo
{
	int data;
	int level;
	Node *parent;
};
void Inorder(Node *root,Node *parent,int level,NodeInfo &x,NodeInfo &y)
{
	if(root==nullptr)
	return;
	
	Inorder(root->left,root,level+1,x,y);
	
	if(root->data==x.data)
	{
		x.level=level;
		x.parent=parent;
	}
	
	if(root->data==y.key)
	{
		y.level=level;
		y.parent=parent;
	}
	Inorder(root->right,root,level+1,x,y);
	
}
bool IfCheckCousion(Node *root,int ele1,int ele2)
{
	if(root==nullptr)
	{
		return false;
	}
	int level=1;
	Node *parent=nullptr;
	
	NodeInfo x={ele1,level,parent};
	NodeInfo y={ele2,level,parent};
	
	Inorder(root,nullptr,1,x,y);
}
int main()
{
	Node *root=nullptr;
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->right->left->left=new Node(8);
	root->right->right->right=new Node(9);
	
	if(IfCheckCousion(root,5,6))
	cout<<"Yes";
	else
	cout<<"False";
}

