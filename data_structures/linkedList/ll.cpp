#include<bits/stdc++.h>
using namespace std;
struct Node{
	int val;
	struct Node *next;
};
struct Node *get_node(int x){
	struct Node *p;
	p->val = x;
	p->next = NULL;
	return p;
}
void insert_node(struct Node **start, vector<int>v){
	struct Node *n;
	for(int x: v){
		n = get_node(x);
		(*start)->next = n;
		n=*start;
	}
}
int main(){
	struct Node *start=NULL;
	vector<int> v;
	insert_node(&start, v);
	while(start!=NULL){
		cout << start->val << " ";
		start=start->next;
	}
}
