//create a program to find the minimum element in a stack with constant complexity
#include<iostream>
#include<string>
#include<stack>
using namespace std;
void Push(stack<int>&s,stack<int>&aux,int data)
{
	s.push(data);
	
	if(aux.empty())
	{
		aux.push(data);
	}
	else
	{
		if(aux.top()>=data)
		{
			aux.push(data);
		}
	}
}
int Min(stack<int>aux)
{
	if(aux.empty())
	{
		cout<<"Stack UnderFlow"<<endl;
		return -1;
	}
	return aux.top();
}
void Pop(stack<int>&s,stack<int>&aux)
{
	if(s.empty())
	{
		cout<<"UnderFlow"<<endl;
		return;
	}
	
	int temp=s.top();
	s.pop();
	
	if(temp==aux.top())
	aux.pop();
}
int main()
{
	stack<int>s;
	stack<int>aux;
	
	Push(s,aux,6);
	cout<<Min(aux)<<endl;
	
	Push(s,aux,7);
	cout<<Min(aux)<<endl;
	
	Push(s,aux,8);
	cout<<Min(aux)<<endl;
	
	Push(s,aux,5);
	cout<<Min(aux)<<endl;
	
	Push(s,aux,3);
	cout<<Min(aux)<<endl;	
	
	Pop(s,aux);
	cout<<Min(aux)<<endl;	
	
	Push(s,aux,10);
	Push(s,aux,1);
	cout<<Min(aux);
}
