#include<iostream>
#include<stack>
using namespace std;
bool match(string str){
	
	if(str.length()==1)
		return false;
	
	stack<char> st;
	for(char ch:str){
		if(ch=='{' || ch=='(' || ch=='['){
			st.push(ch);
		}
		else{
			if(st.empty())
			return false;
			bool f;
			char temp=st.top();
			st.pop();
			if((temp=='(' && ch==')') || (temp=='{' && ch=='}') || (temp=='[' && ch==']')){
				f = true;
			}
		}
	}
}
int main(){
	string str="{()}{";
	if(match(str))
		cout<<"matched";
	else
		cout<<"unmatched";
}
