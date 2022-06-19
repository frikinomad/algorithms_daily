#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL;
struct node *Newnode(int data){
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL){
		printf("Memory error");
		return;
	}	
	ptr->data=data;
	ptr->next=NULL;
	return ptr;
}
void addLast(int data){
	struct node *newnode,*ptr;
	newnode = Newnode(data);
	if(start==NULL){
		start=newnode;
		return;
	}
	ptr=start;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=newnode;
}
void createCycle(){
	struct node *ptr;
	if(start==NULL){
		printf("empty list");
		return;
	}
	ptr=start;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=start;
	printf("cycle created");
	
} 
void display(){
	struct node *ptr;
	if(start==NULL){
		printf("empty list");
	}
	ptr=start;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void detectCycle(){
	struct node *ptr1=start, *ptr2=start;
	while(1){
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
		if(ptr1!=NULL || ptr2!=NULL){
			printf("no cycle");
			break;
		}
		if(ptr1==ptr2){
			printf("cycle");
			break;
		}
	}
}
int main(){
	struct node *newnode;
	addLast(10);
	addLast(20);
	addLast(30);
	addLast(40);
	addLast(50);
	display();
	createCycle();
	detectCycle();
}
