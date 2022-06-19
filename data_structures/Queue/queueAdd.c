#include<stdio.h>
#include<stdlib.h>
#define MAXQ 10
struct queue{
    int data[MAXQ];
    int front,rear;
};
void addq(struct queue *);
void display(struct queue );
int main(){
    int item,choice;
    struct queue q1;
    while(1){
    printf("1.Add q\n2.Display q \n");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            addq(&q1);
            break;
        case 2:
            display(q1);
            break;
        default:
            printf("Enter valid choice");
            break;
        }
    }
}
void addq(struct queue * p){
    int item;
    printf("Enter element to insert: ");
    scanf("%d",&item);
    if((*p).front==1 && p->rear==MAXQ || p->rear+1==p->front){
        printf("Overflow");
        exit(1);
    }
    if(p->front==0){
        p->front=1;
        p->rear=1;
    }else if(p->rear==MAXQ){
        p->rear=1;
    }
    else
        p->rear++;
    p->data[p->rear]=item;        
}
void display(struct queue q1){
    int i=q1.front;
    for(;i!=q1.rear;){
        printf("%d ",q1.data[i]);
        if(i==MAXQ-1)
            i=0;
        else
            i++;
    }
    printf("%d\n",q1.data[i]);
}