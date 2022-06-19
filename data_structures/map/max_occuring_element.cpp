#include<bits/stdc++.h>
using namespace std;
int main(){
	std::string s;
	std::cin >> s;
	std::map<char, int> memo;
	for(char x: s){
		if(memo[x]){
			memo[x] += 1;
		}else{
			memo[x] = 1;
		}
	}
	int max = memo.begin()->second;
	char max_char;
	for(auto i: memo){
		if(i.second > max){
			max = i.second;
		}
	}
	cout<< max;	
}
