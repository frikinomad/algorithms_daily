#include<stdio.h>
#define size 5
struct stack{
	int stack[size];
	int top;
}st;
void push(int data){
	if(st.top==size-1){
		printf("Overflow");
		return;
	}
	st.top++;
	st.stack[st.top]=data;	
}
void peek(){
	if(st.top==-1){
		printf("empty stack");
		return;
	}
	printf("%d\n",st.stack[st.top]);
}
void display(){
	if(st.top==-1){
		printf("empty stack");
		return;
	}
	int i=st.top;
	while(i>=0){
		printf("%d\t",st.stack[i]);
		i--;
	}
	printf("\n");
}
void pop(){
	if(st.top==-1){
		printf("empty stack");
		return;
	}
	st.top--;
}
int main(){
	st.top=-1;
	push(5);
	push(6);
	push(7);
	push(8);
	push(9);
	peek();
	display();
	pop();
	display();
}
