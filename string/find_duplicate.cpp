#include<iostream>
#include<map>
#include<string.h>
using namespace std;
void find_duplicate(char s[], map<char,int>& memo){
	int n = strlen(s);
	
	for(int i=0;i<n;i++){
		auto it = memo.find(s[i]);
		if(it->first)
			it->second++;
		else
			memo.insert({s[i], 1});
	}
	
	for(auto it=memo.begin();it!=memo.end();it++){
		cout<<it->first<<","<<it->second<<endl;
		if(it->second > 1){
			cout<<"Repeated element is: "<<it->first<<","<<it->second;
		}
	}
}

int main(){
	char s[] = "test string";
	map<char,int> memo;
	find_duplicate(s, memo);
}
