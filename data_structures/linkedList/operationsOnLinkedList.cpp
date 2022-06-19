//create main function

#include<stdio.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
struct node *NewNode(int data)
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	return ptr;
	
	ptr->data=data;
	ptr->next=NULL;
	
	return ptr;
}
void InsertionAtFirst(int data)
{
	struct node *newnode;
	
	newnode=NewNode(data);
	if(newnode==NULL)
	{
		printf("Memory Error\n");
		return;
	}
	newnode->next=start;
	start=newnode;	
}

void InsertionAtLast(int data)
{
	struct node *newnode,*ptr;
	newnode=NewNode(data);
	if(newnode==NULL)
	{
		printf("Memory Error");
		return;
	}
	if(start==NULL)
	{
		start=newnode;
		return;
	}
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=newnode;
}
void InsertionBeforGivenData(int x,int y)
{
	struct node *newnode,*ptr;
	
	if(start==NULL)
	{
		printf("Insertion Not Possible\n");
		return;
	}
	if(start->data==x)
	{
		newnode=NewNode(y);
		if(newnode==NULL)
		{
			printf("Memory Error\n");
			return;
		}
		newnode->next=start;
		start=newnode;
	}
	ptr=start;
	while(ptr!=NULL && ptr->next->data!=x)
	ptr=ptr->next;
	
	if(ptr==NULL)
	{
		printf("Insertion Not Possible");
		return;
	}
	
	newnode=NewNode(y);
	if(newnode==NULL)
	{
		printf("Memory Error\n");
		return;
	}
	newnode->next=ptr->next;
	ptr->next=newnode;
}
void InsertionAfterGivenData(int x,int y)
{
	struct node *ptr,*newnode;
	if(start==NULL)
	{
		printf("Insertion Not Possible:");
		return;
	}
	ptr=start;
	while(ptr!=NULL && ptr->data!=x)
	{
		ptr=ptr->next;
	}
	
	if(ptr==NULL)
	{
		printf("Insertion not Possibl:");
		return;
	}
	newnode=NewNode(y);
	newnode->next=ptr->next;
	ptr->next=newnode;
}
void DeletionAtFirst()
{
	struct node *ptr;
	ptr=start;
	if(start==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	
	start=start->next;
	ptr->next=NULL;
	free(ptr);
}
void DeletionAtLast()
{
	struct node *ptr,*prev;
	if(start==NULL)
	{
		printf("List is Empty:\n");
		return;
	}
	if(start->next==NULL)
	{
		free(start);
		start=NULL;
		return;
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	free(ptr);
	prev->next=NULL;
}
void DeletionAccordingGivenData(int x)
{
	struct node *ptr,*prev;
	if(start==NULL)
	{
		printf("List is Empty:");
		return;
	}
	if(start->data==x)
	{
		ptr=start;
		start=start->next;
		ptr->next=NULL;
		free(ptr);
		return;
	}
	
	prev=ptr=start;
	while(ptr!=NULL && ptr->data!=x)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	
	if(ptr==NULL)
	{
		printf("Deletion Not Possible");
		return;
	}
	
	prev->next=ptr->next;
	ptr->next=NULL;
	free(ptr);
}
