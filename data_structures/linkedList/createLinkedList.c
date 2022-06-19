#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void createNode(struct node **start){
	char ch;
	do{
		struct node *newnode , *currentnode;
		newnode = (struct node *)malloc(sizeof(struct node));
		//checking if memory is availaible
		if(newnode==NULL){
			printf("memory not availaible");
			return;
		}
		//inserting data in new node
		printf("\nEnter data in new node: ");
		scanf("%d",&newnode->data);				//newnode->data is same as (*newnode).data
		newnode->next=NULL;
		//assing node to the list
		if(*start==NULL){
			*start=newnode;
		}else{
			currentnode->next=newnode;
		}
		currentnode=newnode;
		printf("Enter y to add node and n to exit: ");
		ch=getche();
	}while(ch!='n');
}
void display(struct node *start){
	struct node *ptr;
	ptr=start;
	if(start==NULL){
		printf("List is empty");
		return;
	}
	while(ptr!=NULL){
		printf("\n%d %d",ptr->data,ptr);		//by displaying ptr and ptr->next(below) we can see the addresses are same(run and see for yourself)
		printf("\t%d",ptr->next);
		ptr=ptr->next;
	}
}
void deallocation(struct node *start){
	struct node *ptr;
	while(start){
		ptr=start;
		start=start->next;		
		ptr->next=NULL;			//here since we have set the value of start in ptr so now when we copy NULL in next of ptr it will remove the link from the next node
		free(ptr);
	}
}
int main(){
	struct node *start1=NULL , *start2=NULL;
	
	//creating list 2
	createNode(&start1);
	//creating list 2
	createNode(&start2);
	
	printf("\nList is: ");
	display(start1);
	display(start2);
	
	deallocation(start1); 	//i.e. emptying the list
	deallocation(start2);
}
