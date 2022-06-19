#include<bits/stdc++.h>
using namespace std;
int main(){
//	int t;
//	cin >> t;
//	vector <int> v;
	string s;
	cin >> s;
	if(s.size() == 1){
		cout << "no";
		return 0;
	}
	vector <int> v(s.size(), 0);
	int i=1, prev = 0;
	while(i<s.size()){
		if(s[i] == s[prev]){
			v[i] = prev+1;
			i++; prev++;
		}else if(prev == 0){
			v[i] = 0;
			i++;
		}else{
			prev = v[prev-1];
		}
	}
	int count = 0;
	for(int x: v){
		cout << x << " ";
		if(x == 0) count ++;
		else count --;
	}
}
