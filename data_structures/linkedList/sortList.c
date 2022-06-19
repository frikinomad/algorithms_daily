//sort a linked list whose elements are either 0,1 or 2
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *push(struct node **head, int key){
	//this is just program for add firt
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=key; 
	newnode->next=*head;
	*head=newnode;
	
	return *head;
}
void display(struct node *head){
	struct node *ptr;
	if(head==NULL){
		printf("empty list");
	}
	ptr=head;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
struct node sort(struct node **head){
	
//	if(head==NULL || head->next==NULL){	//either list is empty or have one node only
//		return;
//	}
	
	struct node dummyzero,dummyone,dummytwo;
	dummyzero.next=dummyone.next=dummytwo.next=NULL;	//dot notation because acessing through object not pointer
	struct node *zero=&dummyzero,*one=&dummyone,*two=&dummytwo;
	
	struct node *ptr=*head;
	while(ptr!=NULL){
		if(ptr->data==0){
			zero->next=ptr;
			zero=zero->next;
		}else if(ptr->data==1){
			one->next=ptr;
			one=one->next;
		}else{
			two->next=ptr;
			two=two->next;
		}
		ptr=ptr->next;
	}
	
	zero->next=(dummyone.next)?(dummyone.next):(dummytwo.next);	//if zero is NULL itself then np it will jump to this condition as if zero list exists it will join the last of zero to one or two
	one->next=dummytwo.next;
	two->next=NULL;
	*head=dummyzero.next;
	
}
int main(){
	int keys[]={0,2,1,2,1,0,1,0,2,1};
	int n=sizeof(keys)/sizeof(keys[0]);
	struct node *head=NULL;
	int i;
	for(i=0;i<n;i++){
		push(&head,keys[i]);
	}
	display(head);
	sort(&head);
	display(head);
}
