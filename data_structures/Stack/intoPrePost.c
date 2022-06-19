#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSTK 100
struct stack{
    char data[MAXSTK];
    int top;
};
void push(struct stack *,char);
char pop(struct stack *);
char peep(struct stack);
void intopost(char[],char[]);       //this second char[] is output not input, cuz we can't have an array as a return so we'll do this
void intopre(char[],char[]);
int isoperator(char);
int preced(char);
main(){
    char in[50],post[50],pre[50];
    printf("Enter equation in infix notation:");
    gets(in);
    intopost(in,post);
    printf("Postfix expression is %s\n",post);
    intopre(in,pre);
    printf("Prefix expression is %s\n",pre);
}
void push(struct stack *p,char item){
    if(p->top==MAXSTK-1){
        printf("\nOVERFLOW\n");
        return;
    }
    p->top++;
    p->data[p->top]=item;
}
char pop(struct stack *p){
    char item;
    if(p->top== -1){
        printf("\nUNDERFLOW\n");
        return 0;
    }
    item=p->data[p->top];
    p->top--;
    return item;
}
char peep(struct stack s1){
    char item;
    if(s1.top== -1){
        printf("\nUNDERFLOW\n");
        return 0;
    }
    item=s1.data[s1.top];
    return item;
}
void intopost(char in[],char post[]){
    int i=0,j=0;
    char ch;
    struct stack s1;
    s1.top=-1;
    while(in[i]!='\0'){
        if(in[i]=='('){
            push(&s1,in[i]);
        }
        else if(in[i]==')'){
            ch=pop(&s1);
            while(ch!='('){
                post[j++]=ch;
                ch=pop(&s1);
            }
        }
        else if(isoperator(in[i])){
            ch=peep(s1);
            while(ch!='(' && preced(ch)>=preced(in[i])){
                post[j++]=pop(&s1);
                ch=peep(s1);
            }
            push(&s1,in[i]);
        }
        else{//operand
            post[j++]=in[i];
        }
        i++;
    }
    post[j]='\0';
}
void intopre(char in[],char pre[]){
    int i,j=0;
    char ch;
    struct stack s1;
    s1.top=-1;
    i=strlen(in)-1;
    while(i>=0){
        if(in[i]==')'){
            push(&s1,in[i]);
        }
        else if(in[i]=='('){
            ch=pop(&s1);
            while(ch!=')'){
                pre[j++]=ch;
                ch=pop(&s1);
            }
        }
        else if(isoperator(in[i])){
            ch=peep(s1);
            while(ch!=')' && preced(ch)>preced(in[i])){
                pre[j++]=pop(&s1);
                ch=peep(s1);
            }
            push(&s1,in[i]);
        }
        else{//operand
            pre[j++]=in[i];
        }
        i--;
    }
    pre[j]='\0';
    strrev(pre);
}
int isoperator(char ch){
    if(ch=='^'||ch=='*'||ch=='/'||ch=='+'||ch=='-')
        return 1;
    return 0;
}
int preced(char op){
    switch(op){
        case '^':return 3;
        case '*':
        case '/':return 2;
        case '+':
        case '-':return 1;
        default:return 0;
    }
}