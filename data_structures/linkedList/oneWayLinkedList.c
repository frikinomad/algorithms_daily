#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node * getnode();
struct node * createLL(struct node *);
void traverse(struct node *);
int count(struct node *);
struct node * search(struct node *,int);
struct node addfirst(struct node *,int);
struct node addlast(struct node *,int);
struct node * addafter(struct node *,int,int);
struct node * addbefore(struct node *,int,int);
struct node * delnode(struct node *,int);
struct node * delallnode(struct node *);
void sort(struct node *);
struct node * reverse(struct node *);
void printreverse(struct node*);
int main(){
    int ch,item,numb,cnt,res;
    struct node *start,*loc;
    start=NULL;
    start=createLL(start);
    do{
        printf("1. Traverse\n2. Count\n3. Search\n4. AddFirst\n5. AddLast\n6. AddAfter\n7. AddBefore\n8. DelNode\n9. Sort\n10. Reverse\n11. Print reverse without reversing\n12. Exit\nEnter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                traverse(start);
                break;
            case 2:
                cnt=count(start);
                printf("Number of nodes are %d",cnt);
                break;
            case 3:
                printf("Enter item to search:");
                scanf("%d",&item);
                loc=search(start,item);
                if(loc==NULL)
                    printf("Not Found");
                else
                    printf("Found");
                break;
            case 4:
                printf("Enter item to add:");
                scanf("%d",&item);
                start=addfirst(start,item);
                break;
            case 5:
                printf("Enter item to add:");
                scanf("%d",&item);
                start=addlast(start,item);
                break;
            case 6:
                printf("Enter item to add:");
                scanf("%d",&item);
                printf("Enter number after which you want to add:");
                scanf("%d",&numb);
                start=addafter(start,item,numb);
                break;
            case 7:
                printf("Enter item to add:");
                scanf("%d",&item);
                printf("Enter number before which you want to add:");
                scanf("%d",&numb);
                start=addbefore(start,item,numb);
                break;
            case 8:
                printf("Enter item to delete:");
                scanf("%d",&item);
                start=delnode(start,item);
                break;
            case 9:
                sort(start);
                break;
            case 10:
                start=reverse(start);
                break;
            case 11:
                printreverse(start);
                break;
            case 12:
                start=delallnode(start);
                break;
            default:
                printf("Invalid choice");
        }
        getch();
        system("cls");
    }while(ch!=12);
}
struct node *getnode(){
    struct node*t;
    t=(struct node *)malloc(sizeof(struct node));
    return t;
}
struct node *createLL(struct node *start){
    struct node *newnode,*t;
    int n,i,item;
    printf("Enter how many items you want to add in linked list:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        newnode=getnode();
        if(newnode==NULL){
            printf("OVERFLOW");
            return start;
        }
        printf("enter item %d:",i);
        scanf("%d",&item);
        newnode->info=item;
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
            t=newnode;
        }
        else{
            t->next=newnode;
            t=newnode;
        }
    }
    return start;
}
void traverse(struct node *start){
    struct node *ptr;
    if(start==NULL){
        printf("List is Empty...");
        return;
    }
    ptr=start;
    while(ptr!=NULL){
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}
int count(struct node *start){
    struct node *ptr;
    int cnt=0;
    ptr=start;
    while(ptr!=NULL){
        cnt++;
        ptr=ptr->next;
    }
    return cnt;
}
struct node * search(struct node *start,int item){
    struct node *ptr;
    if(start==NULL){
        return NULL;
    }
    ptr=start;
    while(ptr!=NULL && item!=ptr->info){
        ptr=ptr->next;
    }
    return ptr;
}
struct node addfirst(struct node start,int item){
    struct node *newnode;
    newnode=getnode();
    if(newnode==NULL){
        printf("OVERFLOW");
        return start;
    }
    newnode->info=item;
    newnode->next=start;
    start=newnode;
    return start;
}
struct node addlast(struct node start,int item){
    struct node *newnode,*ptr;
    newnode=getnode();
    if(newnode==NULL){
        printf("OVERFLOW");
        return start;
    }
    newnode->info=item;
    newnode->next=NULL;
    if(start==NULL)
        start=newnode;
    else{
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    return start;
}
struct node addafter(struct node start,int item,int numb){
    struct node *newnode,*ptr;
    if(start==NULL){
        printf("Number not found...");
        return start;
    }
    ptr=start;
    while(ptr!=NULL && ptr->info!=numb){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        newnode=getnode();
        if(newnode==NULL){
            printf("OVERFLOW");
            return start;
        }
        newnode->info=item;
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
    else{
        printf("Number not found...");
    }
    return start;
}
struct node addbefore(struct node start,int item,int numb){
    struct node *newnode,*ptr,*preptr;
    if(start==NULL){
        printf("Number not found...");
        return start;
    }
    preptr=NULL;
    ptr=start;
    while(ptr!=NULL && ptr->info!=numb){
        preptr=ptr;
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        newnode=getnode();
        if(newnode==NULL){
            printf("OVERFLOW");
            return start;
        }
        newnode->info=item;
        newnode->next=ptr;
	if(preptr==NULL)
		start->next=newnode;
	else
	        preptr->next=newnode;
    }
    else
        printf("Number not found...");
    return start;
}
struct node * delnode(struct node *start,int item){
    struct node* preptr,*ptr;
    if(start==NULL){
        printf("Item not found...");
        return start;
    }
    preptr=NULL;
    ptr=start;
    while(ptr!=NULL && ptr->info!=item){
        preptr=ptr;
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        if(ptr==start)
            start=start->next;
        else
            preptr->next=ptr->next;
        free(ptr);
    }
    else
        printf("Item not found...");
    return start;
}
struct node * delallnode(struct node *start){
    struct node *ptr;
    while(start!=NULL){
        ptr=start;
        start=start->next;
        free(ptr);
    }
    return NULL;
}
void sort(struct node *start){
    struct node *p1,*p2;
    for(p1=start;p1->next!=NULL;p1=p1->next)
        for(p2=p1->next;p2!=NULL;p2=p2->next)
            if(p1->info>p2->info){
                int t=p1->info;
                p1->info=p2->info;
                p2->info=t;
            }
}
struct node * reverse(struct node *start){
    struct node*p1,*p2,*p3;
    p3=start;
    p2=NULL;
    while(p3!=NULL){
        p1=p2;
        p2=p3;
        p3=p3->next;
        p2->next=p1;
    }
    start=p2;
    return start;
}
void printreverse(struct node* start){
    // Base case
    if (start == NULL)
       return;
    // print the list after start node
    printreverse(start->next);

    // After everything else is printed, print start
    printf("%d  ", start->info);

}
