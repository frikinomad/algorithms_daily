#include<bits/stdc++.h>
using namespace std;
int main(){
	// string base = "ababcaababcaabc";
	// string s = 	  "ababcaabc";

	string base = "geek";
	string s = 	  "gesek";

	vector<int> v(s.size(), 0);

	int i=1, prev = 0;
	while(i<s.size()){
		if(s[i] == s[prev]){
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
	for(int x: v){
		cout << x << " ";
	}
	cout << endl;
	
// 	i = 0; //for base string
// 	int j = 0; // for s string
// 	while(i<base.size() && j!=s.size()){
// 		if(base[i] == s[j]){
// //			cout << i << " " << j << "\n";
// //			here we will not insert anything in reset table just match, only change from above loop
// 			i++; j++;			
// 		}else if(j==0){
// 			i += 1;
// 		}else{
// 			j = v[j-1];
// 		}
// 	}
// 	//if j i.e. the index of reset table is equal to size of array i.e. it has completely traversed the array
// 	if(j == s.size()){
// 		cout<< i - s.size();
// 	}else{
// 		cout << -1;
// 	}
}
