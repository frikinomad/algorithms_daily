// own

#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node* left;
    node* right;
};
node* GetNewNode(int data){
    node* newNode=new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
node* InsertNewNode(node* rootptr, int data){
    if(rootptr == NULL){
        rootptr= GetNewNode(data);
    }
    else if(data <= rootptr->data){
        rootptr->left = InsertNewNode(rootptr->left, data);
    }else{
        rootptr->right = InsertNewNode(rootptr->right, data);
    }
    return rootptr;
}
void Inorder(node *root){
	if(root==NULL)
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
void search(node* root, int target){
    while(root!=NULL){
        if(target == root->data){
            cout << "found";
            break;
        }else if(target <= root->data){
            root=root->left;
        }else {
            root=root->right;
        }
    }
} 
int main(){
    node* root=NULL;
    root = InsertNewNode(root, 15);
    root = InsertNewNode(root, 10);
    root = InsertNewNode(root, 20);
    root = InsertNewNode(root, 8);
    root = InsertNewNode(root, 12);
    root = InsertNewNode(root, 16);
    root = InsertNewNode(root, 25);
    Inorder(root);
    search(root, 100);
}