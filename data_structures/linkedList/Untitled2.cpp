#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void Display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void Push(struct node **head,int data)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head;
	*head=newnode;
}
void MoveNode(struct node **dest,struct node *src)
{

	if(*src==NULL)
	return;
	
	struct node *newnode=*src;
	*src=(*src)->next;
	newnode->next=*dest;
	*dest=newnode;
}
void Rearrange(struct node *head)
{
	if(head==NULL)
	return;
	
	struct node *odd=head;
	struct node *even=NULL,*prev=NULL;
	while(odd && odd->next)
	{
		MoveNode(&even,&(odd->next));
		prev=odd;
		odd=odd->next;
	}
	if(odd)
	odd->next=even;
	else
	prev->next=even;
	
}
int main()
{
	int keys[]={1,2,3,4,5,6,7};
	int n=sizeof(keys)/sizeof(keys[0]);
	struct node *head=NULL;
	
	for(int i=n-1;i>=0;i--)
	Push(&head,keys[i]);
	
	printf("Before:\n");
	Display(head);
	Rearrange(head);
	
	Display(head);
}
