#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	vector <char> v(2*s.size()+1);
	for(char x: s){
		v.push_back('|');
		v.push_back(x);	
	}
	for(char x: v){
		if(x == '|'){
			
		}
	}
}
