#include<iostream>
using namespace std;
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
void Push(struct node **start,struct node **last,int data)
{
	struct node *newnode;
	newnode=new struct node;
	newnode->data=data;
	if(*start==NULL)
	{
		*start=newnode;
		*last=newnode;
		newnode->next=*start;
	}
	else
	{
		newnode->next=*start;
		*start=newnode;
		last->next=newnode;
	}
}
void Display(struct node *start)
{
	struct node *ptr=start;
	do
	{
		cout<<ptr->dasta<<"\t";
		ptr=ptr->next;
	}while(ptr!=start);
	cout<<endl;
}
int main()
{
	int keys[]={1,2,3,4,5,6,7};
	int n=sizeof(keys)/sizeof(int);
	struct node *start=NULL,*last=NULL;
	
	for(int i=n-1;i>=0;i--)
	Push(&start,&last,keys[i]);
	
	Display(start);

}
