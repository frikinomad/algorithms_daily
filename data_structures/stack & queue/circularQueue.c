#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*rear=NULL,*front=NULL;
void enqueue(int data){
	struct node *newnode;
	newnode	= (struct ndoe *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("memory error");
		return;
	}
	newnode->data=data;
	newnode->next=NULL;
	if(front=NULL && rear=NULL){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		newnode->next=front;
		rear=newnode;
	}
}
void display(){
	if(rear==NULL && front==NULL){
		printf("empty queue");
		return;
	}
	struct node *ptr;
	ptr=newnode;
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	display();
}
