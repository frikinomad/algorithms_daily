#include<bits/stdc++.h>
using namespace std;
int main(){
//	string base = "saippuakauppias";
//	string s = 	  "pp";

	string base;
	string s;
	cin >> base;
	cin >> s;

	vector<int> v(s.size(), 0);

	int i=1, prev = 0;
	while(i<s.size()){
		if(s[i] == s[prev]){
//			v[i] = prev+1; 
			v[i] = prev + 1;
			prev++;
			i++;
		}else if(prev==0){
			v[i] = 0;
			i++;
		}else{
			prev = v[prev-1];	
		}
	}
	
	i = 0; //for base string
	int j = 0; // for s string
	vector<int> count;
	while(i<base.size()){
		if(base[i] == s[j]){
			i++; j++;			
		}else if(j==0){
			i += 1;
		}else{
			j = v[j-1];
		}
		if(j==s.size()){
			count.push_back(i-s.size());
		}
	}

	cout << count.size();
}
