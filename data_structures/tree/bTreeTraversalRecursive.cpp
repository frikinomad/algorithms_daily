#include<iostream>
using namespace std;
struct node{
	
	struct node *left;
	int data;
	struct node *right;
	
	node(int data){		//constructor for structure
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
//root left right
void Preorder(node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}
//left root right
void Inorder(node *root){
	if(root==NULL)
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
//left right root
void Postorder(node *root){
	if(root==NULL){
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}
int main(){
	node *root=NULL;
	root=new node(15);
	root->left=new node(10);
	root->right=new node(20);
	root->left->left=new node(8);
	root->left->right=new node(12);
	root->right->left=new node(16);
	root->right->right=new node(25);
	Preorder(root);
	cout<<"\n";
	Inorder(root);
	cout<<"\n";
	Postorder(root);
}
