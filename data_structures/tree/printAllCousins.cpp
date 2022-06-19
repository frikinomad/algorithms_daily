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
void Level(Node *root,Node *node,int index,int &level)
{
	if(root==nullptr || level)
	return;
	
	if(root==node)
	{
		level=index;
	}
	
	Level(root->left,node,index+1,level);
	Level(root->right,node,index+1,level);
	
}
void PrintLevel(Node *root,Node *node,int level)
{
	if(root==nullptr)
	return;
	
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}
	
	if(!(root->left && root->left==node || root->right && root->right==node))
	{
		PrintLevel(root->left,node,level-1);
		PrintLevel(root->right,node,level-1);
	}
}
void PrintAllCousins(Node *root,Node *node)
{
	int level=0;
	Level(root,node,1,level);
	
	PrintLevel(root,node,level);
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
	
	PrintAllCousins(root,root->right->left);
}

