#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*top=NULL;
void push(int data){
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("Memory error");
		return;
	}
	newnode->data=data;
	newnode->next=top;
	top=newnode;
}
void peek(){
	if(top==NULL){
		printf("empty list");
		return;
	}
	printf("%d\n",top->data);
}
void display(){
	struct node *ptr=top;
	while(ptr->next!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void pop(){
	struct node *ptr;
	if(top==NULL){
		printf("empty list");
		return;		
	}
	ptr=top;
	top->next=top;
	ptr->next=NULL;
	free(ptr);	
}
int main(){
	push(5);
	push(6);
	push(7);
	push(8);
	push(9);
	peek();
	display();
	pop();
	display();
}
