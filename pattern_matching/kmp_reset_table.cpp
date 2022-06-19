#include<bits/stdc++.h>
using namespace std;
int main(){
//	string s = "abba";
//	string s = "Dermatoglyphics";		//to check isogram, i.e. no repeating characters

	vector<int> v(s.size(), 0);

	int i=1, prev = 0;
	while(i<s.size()){
		if(s[i] == s[prev]){
			v[i] = prev+1;	
			prev++;
			i++;
		}else if(prev==0){	//here prev is index of v not value v
			v[i] = 0;
			i++;
		}else{
			prev = v[prev-1];	
		}
	}
	for(int x: v){
		
		cout << x << " ";		
	}
}
