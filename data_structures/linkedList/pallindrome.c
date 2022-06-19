#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node **head, int key){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->next=*head;
	*head=newnode;
	
}
void display(struct node *head){
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}	
}
void checkPallindrome(struct node *head){
	struct node *ptr1 , *ptr2 , *ptr;
	ptr1=ptr2=head;
	while(ptr2->next!=NULL || ptr2->next->next!=NULL){		
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
	}
	ptr=head;
	p=ptr1;
	if(ptr!=p){
		if(ptr1!)
	}
}
int main(){
	struct node *head=NULL;
	int keys[]={1,3,5,3,7}; 	//odd 
//	int keys[]={1,4,5,5,4,1};	//even
	int n=sizeof(keys)/sizeof(keys[0]);
	int i;
	for(i=0;i<n;i++){
		push(&head,keys[i]);
	}
	display(head);
	checkPallindrome(head);
}
