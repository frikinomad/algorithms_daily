#include<iostream>
#include<queue>
#include<string>
using namespace std;
void BinaryNumberGenerator(int n){
	queue<string>q;
	q.push("1"); 
	int i=1;
	while(i<=n){
		q.push(q.front()+"0");
		q.push(q.front()+"1");
		cout<<q.front()<<"\n";		//here the values will go beyond 5 while tracing as we are pushing 2 values at a time but since we are printing only one
		//value so it will print upto n only
		q.pop();
		i++;  
	}
}

int main(){
	int n = 5;
	BinaryNumberGenerator(n);
}

//we can also use stack in this , for each value divide by 2 and keep saving the value in a stack and then print them , since we have 2 loop through each value
//loop through the stack to print that , the complexity of program increases
