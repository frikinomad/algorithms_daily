#include<bits/stdc++.h>
using namespace std;
int main(){
//	string s = "LeetcodeHelpsMeLearn";
//	vector<int> spaces {8,13,15};
	string s = "spacing";
	vector<int> spaces {0,1,2,3,4,5,6};
	
	int i=0, j=0;
    
//	string s1 = " ";
//	if(i == spaces[j] && i==0){
//		s1 = s1 + s[i];
//		j++;
//	}else{
//		s1 = s[i];
//	}
//    s1.resize(s1.size() +1);	
	
	vector <char> v;

	for(i=0;i<s.size();i++){
        if(i == spaces[j]){
        	v.push_back(' ');
        	v.push_back(s[i]);
//	        s1 = s1 + ' ' + s[i];
    	    j++;
    	}else{
    		v.push_back(s[i]);
//    		s1 += s[i];
        }
    }
    for(char x: v){
    	cout << x;
	}
//    cout << s1;
}
