#include<iostream>
using namespace std;
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
void Push(struct node **start,int data)
{
	struct node *newnode;
	newnode=new struct node;
	newnode->data=data;
	if(*start==NULL)
	{
		*start=newnode;
		newnode->next=newnode->prev=newnode;
	}
	else
	{
		newnode->prev=(*start)->prev;
		newnode->next=*start;
		(*start)->prev=newnode;
		*start=newnode;
		(*start)->prev->next=newnode;
	}
}
void Display(struct node *start)
{
	struct node *ptr=start;
	do
	{
		cout<<ptr->data<<"\t";
		ptr=ptr->next;
	}while(ptr!=start);
	cout<<endl;
}
void Reverse(struct node *end)
{
	struct node *ptr;
	ptr=end;
	do
	{
		cout<<ptr->data<<"\t";
		ptr=ptr->prev;
	}while(ptr!=end);
	cout<<endl;
}
int main()
{
	int keys[]={1,2,3,4,5,6,7};
	int n=sizeof(keys)/sizeof(int);
	struct node *start=NULL;
	
	for(int i=n-1;i>=0;i--)
	Push(&start,keys[i]);
	
	Display(start);
	Reverse(start->prev);
}
