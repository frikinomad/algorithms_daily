#include<iostream>
#include<stack>
using namespace std;
struct node{
	struct node *left;
	int data;
	struct node *right;
	
	node (int data){
		this->data=data;
		this->right=NULL;
		this->left=NULL;
	}
};
void Preorder(struct node *root){
	stack<struct node *> st;
	st.push(root);
	while(root!=NULL){
		root=st.top();
		st.pop();
		cout<<root->data<<" ";
		if(root->right){
			st.push(root->right); 
		}
		if(root->left){
			st.push(root->left);
		}
	}
}
void Inorder(struct node *root){
	stack <struct node *> st;
	st.push(root);
	while(!st.empty() || root!=NULL){		//
		if(root!=NULL){
			st.push(root);
			root=root->left; 
		}
		else{
			root=st.top();
			st.pop();
			cout<<root->data<<" ";
			root=root->right;
		}
	}
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
//	Preorder(root);
//	cout<<"\n";
	Inorder(root);
//	cout<<"\n";
//	Postorder(root);
}
