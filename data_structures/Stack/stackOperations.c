#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSTK 5
struct stack{
    int data[MAXSTK];
    int top;
};
void push(struct stack *,int);
int pop(struct stack *);
int peep(struct stack);
void display(struct stack);
main(){
    int item,ch;
    struct stack s1;
    s1.top=-1;
    do{
        system("cls");
        printf("1. Push\n2. Pop\n3. Peep\n4. Display\n5. Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter value to push:");
                scanf("%d",&item);
                push(&s1,item);
                break;
            case 2:
                item=pop(&s1);
                if(item!=0)
                    printf("\n%d",item);
                break;
            case 3:
                item=peep(s1);
                if(item!=0)
                    printf("\n%d",item);
                break;
            case 4:
                display(s1);
                break;
            case 5:
                break;
            default:
                printf("\nInvalid choice\n");
        }
        getch();
    }while(ch!=5);
}
void push(struct stack *p,int item){
    if(p->top==MAXSTK-1){       //since we have already put top=-1 so now if MAXSTK=0 i.e. empty and we do MAXSTK-1 then overflow
        printf("\nOVERFLOW\n");
        return;
    }
    p->top++;
    p->data[p->top]=item;
}
int pop(struct stack *p){
    int item;
    if(p->top== -1){
        printf("\nUNDERFLOW\n");
        return 0;
    }
    item=p->data[p->top];
    p->top--;       //top-- as now we have removed the topmost element so shift to next element which is below the top
    return item;
}
int peep(struct stack s1){
    int item;
    if(s1.top== -1){
        printf("\nUNDERFLOW\n");
        return 0;
    }
    item=s1.data[s1.top];       //here we have not done top-- because we just have to see the data and not remove it
    return item;                //and also not used the pointer just accessed the object i.e. call by value only as we don't want to change anything
}
void display(struct stack s1){
    int i;
    if(s1.top== -1){
        printf("Stack is empty");
        return;
    }
    for(i=s1.top;i>=0;i--)
        printf("\n%d",s1.data[i]);
}