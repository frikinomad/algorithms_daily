//longest pallindrome substring

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string res;
	int reslen=0;

	for(int i=0;i<s.size();i++){
		// odd length 
		int l=i, r=i; 		//diff b/w odd and even length
		while(l>=0 && r<s.size() && (s[l] == s[r])){
			if(r - l + 1 > reslen){
				reslen = r - l + 1;
				res = s.substr(r,l);
			}
			l--;
			r++;
		}
		//even length
		l=i, r=i+1; 		//diff b/w odd and even length
		while(l>=0 && r<s.size() && (s[l] == s[r])){
			if(r - l + 1 > reslen){
				reslen = r - l + 1;
				res = s.substr(r,l);
			}
			l--;
			r++;
		}		
	}
	cout << res;
}
