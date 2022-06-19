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
bool isLeaf(Node *root)
{
	return (root->left==nullptr && root->right==nullptr);
}
void PrintRoottoLeafPath(Node *root,vector<int>&path)
{
	if(root==nullptr)
	return;
	
	path.push_back(root->data);
	
	if(isLeaf(root))
	{
		for(int data:path)
		cout<<data<<" ";
		cout<<endl;
		
	}
	PrintRoottoLeafPath(root->left,path);
	PrintRoottoLeafPath(root->right,path);
	path.pop_back();
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
	
	vector<int>path;
	
	PrintRoottoLeafPath(root,path);
}

