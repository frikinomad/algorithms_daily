#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
struct node *Newnode(int data){
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	
	if(ptr==NULL){
		printf("memory not availabible");
	}
	
	ptr->data=data;
	ptr->next=NULL;
	
	return ptr;
	
}
////////////
void addFirst(int data){
	
	struct node *newnode;
	newnode=Newnode(data);
	
	if(newnode==NULL){
		printf("Memory error");
		return;
	}
	newnode->next=start;		//trace it again and again , here start will contain NULL initially so when newnode->next=start will mean newnode->next=NULL
	start=newnode;				//and then start will store the address of newnode i.e. point to newnode , so when next time a newnode will come it will point
					//to start which has the address of previously assigned node so basically it will assign to the first node and then the start will take the 
					//address of this current newnode
}
/////////////
void addLast(int data){
	struct node *newnode,*ptr;
	newnode=Newnode(data);
	if(newnode==NULL){
		printf("Memory error");
		return;
	}
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
/////////////
void addBefore(int data , int before){
	struct node *newnode,*ptr;
	
	if(start==NULL){
		printf("empty list");
		return;
	}
	if(start->data==before){
		newnode=Newnode(data);
		if(newnode==NULL){
			printf("memory error");
			return;
		}
		newnode->next=start;
		start=newnode;
	}
	ptr=start;
	while(ptr!=NULL && ptr->next->data!=before){
		ptr=ptr->next;
	}
	if(ptr==NULL){
		printf("element to be inserted before not found");
		return;
	}
	
	newnode=Newnode(data);
	if(newnode==NULL){
		printf("Memory error");
		return;
	}
	
	ptr->next=newnode;
	newnode->next=ptr->next;
	
}
/////////////
void addAfter(int data , int after){
	struct node *newnode,*ptr;
	
	newnode=Newnode(data);
	if(newnode==NULL){
		printf("Memory error");
		return;
	}
	ptr=start;
	while(ptr!=NULL && ptr->data!=after){
		ptr=ptr->next;
	}
	if(ptr==NULL){
		printf("Element to be inserted before not found");
		return;
	}
	newnode->next=ptr->next;
	ptr->next=newnode;
	
}
/////////////
void deleteFirst(){
	struct node *ptr;
	if(start==NULL){
		printf("Empty list");
		return;
	}
	ptr=start;
	start=start->next;
	ptr->next=NULL;
	free(ptr);

}
/////////////
void deleteLast(){
	struct node *ptr,*prev;
	if(start==NULL){
		printf("Enpty List");
		return;
	}
	if(start->next==NULL){
		free(start);
		start=NULL;
		return;
	}
	ptr=start;
	while(ptr->next!=NULL){
		prev=ptr;
		ptr=ptr->next;
	}
	free(ptr);
	prev->next=NULL;
	
}
/////////////
void deleteGiven(int data){
	struct node *ptr,*prev;
	if(start==NULL){
		printf("Empty list");
		return;
	}
	if(start->data==data){
		deleteFirst();
	}
	while(ptr!=NULL && ptr->data!=data){
		prev=ptr;
		ptr=ptr->next;
	}
	if(ptr==NULL){
		printf("Element to be deleted not found");
		return;
	}
	prev->next=ptr->next;
	ptr->next=NULL;
	free(ptr);
	
}
/////////////
void display(){
	struct node *ptr;
	if(start==NULL){
		printf("empty list");
		return;
	}
	ptr=start;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
/////////////
int main(){
	int n,x,y;
	printf("Operations on Linked List\n");
	
	do{
		printf("Enter your choice\n1. Add first\n2. Add last\n3. Add before given data\n4. Add after given data\n5. Delete first\n6. Delete last\n7. Delete given node\n8. Display\n");
		scanf("%d",&n);					
		switch(n){
			case 1:
				printf("Enter data to add: ");
				scanf("%d",&x);
				addFirst(x);
				break;
			case 2:
				printf("Enter data to add: ");
				scanf("%d",&x);
				addLast(x);
				break;
			case 3:
				printf("Enter value to add before and data to add: ");
				scanf("%d %d",&x,&y);
				addBefore(x,y);
				break;
			case 4:
				printf("Enter value to add after and data to add: ");
				scanf("%d %d",&x,&y);
				addAfter(x,y);
				break;
			case 5:
				deleteFirst();
				break;
			case 6:
				deleteLast();
				break;
			case 7:
				printf("Enter data to delete: ");
				scanf("%d",&x);
				deleteGiven(x);
				break;
			case 8:
				display();
				break;
			default:
				printf("enter valid choice\n");
		}
	}while(1);
}
