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
	//creating newnode and inserting data , here data is keys[i] and head is &a
	//program for add first
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head;
	*head=newnode;
}
struct node *ShuffleMerge(struct node *a,struct node *b)
{
	struct node dummy;
	struct node *tail=&dummy;
	dummy.next=NULL;
	
	while(1)
	{
		if(a==NULL)		//i.e. if list empty
		{
			tail->next=b;	
			break;
		}
		else if(b==NULL)
		{
			tail->next=a;
			break;
		}
		else
		{
			tail->next=a;
			tail=a;
			a=a->next;
			
			tail->next=b;
			tail=b;
			b=b->next;
		}
	}
	
	return dummy.next;
}
int main()
{
	int keys[]={1,2,3,4,5,6,7};
	int n=sizeof(keys)/sizeof(keys[0]);
	struct node *a=NULL,*b=NULL;
	
	for(int i=n-1;i>=0;i=i-2)	//for all even numbers (trace it) , in &a
	Push(&a,keys[i]);
	
	for(int i=n-2;i>=0;i=i-2)	//for all odd numbers (trace it) , in &b
	Push(&b,keys[i]);
	
	Display(a);
	Display(b);
	
	//first create 2 sorted linked list with even and odd number of nodes and then shufflemerge them in to one LL c .
	struct node *c=ShuffleMerge(a,b);
	Display(c);
}
