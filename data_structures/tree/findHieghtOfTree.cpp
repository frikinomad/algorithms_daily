#include<iostream>
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
int Height(Node *root)
{
	if(root==nullptr)
	{
		return 0;
	}
	return 1+max(Height(root->left),Height(root->right));
}
int NonRecursiveHeight(Node *root)
{
	if(root==nullptr)
	return 0;
	
	queue<Node *>q;
	q.push(root);
	int height=0;
	while(!q.empty())
	{
		int size=q.size();
		while(size--)
		{
			root=q.front();
			q.pop();
			
			if(root->left)
			q.push(root->left);
			
			if(root->right)
			q.push(root->right);
		}
		height++;
	}
	return height;
}
int main()
{
	Node *root=nullptr;
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->right=new Node(4);
	root->left->right->right=new Node(5);
	cout<<Height(root);
	
}
