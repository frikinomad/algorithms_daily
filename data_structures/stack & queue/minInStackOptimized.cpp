//find minimum in stack without using aux or second stack

#include<iostream>
#include<string>
#include<stack>
using namespace std;
int m;
void Push(stack<int>&s,int data)
{
		
	if(s.empty())
	{
		s.push(data);
		m=data;
	}
	else if(data>m)
	{
		s.push(data);
	}
	else
	{
		s.push(2*data-m);
		m=data;
	}
}
int Min()
{
	return m;
}
void Pop(stack<int>&s)
{
	if(s.empty())
	{
		cout<<"UnderFlow"<<endl;
		return;
	}
	
	int temp=s.top();
	s.pop();
	
	if(temp<m)
	m=2*m-temp;
}
int main()
{
	stack<int>s;

	
	Push(s,6);
	cout<<Min()<<endl;
	
	Push(s,7);
	cout<<Min()<<endl;
	
	Push(s,8);
	cout<<Min()<<endl;
	
	Push(s,5);
	cout<<Min()<<endl;
	
	Push(s,3);
	cout<<Min()<<endl;	
	
	Pop(s);
	cout<<Min()<<endl;	
	
	Push(s,10);
	Push(s,1);
	cout<<Min();
}
