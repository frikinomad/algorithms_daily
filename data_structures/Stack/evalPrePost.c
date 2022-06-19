#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAXSTK 100
struct stack{
    int data[MAXSTK];
    int top;
};
void push(struct stack *,int);
int pop(struct stack *);
int evalpost(char[]);
int evalpre(char[]);
int isoperator(char);
int eval(char,int,int);
main(){
    int ans;
    char post[50],pre[50];
    printf("Enter equation in postfix notation:");
    gets(post);
    ans=evalpost(post);
    printf("Result is %d\n",ans);

    printf("Enter equation in prefix notation:");
    gets(pre);
    ans=evalpre(pre);
    printf("Result is %d\n",ans);
}
void push(struct stack *p,int item){
    if(p->top==MAXSTK-1){
        printf("\nOVERFLOW\n");
        return;
    }
    p->top++;
    p->data[p->top]=item;
}
int pop(struct stack *p){
    char item;
    if(p->top== -1){
        printf("\nUNDERFLOW\n");
        return 0;
    }
    item=p->data[p->top];
    p->top--;
    return item;
}
int evalpost(char post[]){
    int i=0,ans,a,b;
    char ch;
    struct stack s1;
    s1.top=-1;
    while(post[i]!='\0'){
        if(!isoperator(post[i])){//operand
            push(&s1,post[i]-'0');
        }
        else{
            a=pop(&s1);
            b=pop(&s1);
            ans=eval(post[i],b,a);
            push(&s1,ans);
        }
        i++;
    }
    ans=pop(&s1);
    return ans;
}
int evalpre(char pre[]){
    int i,ans,a,b;
    char ch;
    struct stack s1;
    s1.top=-1;
    i=strlen(pre)-1;
    while(i>=0){
        if(!isoperator(pre[i])){//operand
            push(&s1,pre[i]-'0');
        }
        else{
            a=pop(&s1);
            b=pop(&s1);
            ans=eval(pre[i],a,b);
            push(&s1,ans);
        }
        i--;
    }
    ans=pop(&s1);
    return ans;
}
int isoperator(char ch){
    if(ch=='^'||ch=='*'||ch=='/'||ch=='+'||ch=='-')
        return 1;
    return 0;
}
int eval(char op,int op1,int op2){
    switch(op){
        case '^':return (int)pow(op1,op2);
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '+':return op1+op2;
        case '-':return op1-op2;
        default:return 0;
    }
}