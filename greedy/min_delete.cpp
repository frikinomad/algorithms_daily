// Minimum Deletions to Make Character Frequencies Unique
// good string is where no 2 characters have same freq

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aaabbbcc";
    sort(s.begin(), s.end());
    cout << s << "\n";
    map<int, char> memo;
    int count=1;
    char x = s[0];
    for(int i=1;i<s.size();i++){
        if(s[i] == s[i-1]){
            count++;
        }else{
            memo[count] = s[i-1];
            count=1;
        }
    }
    for(auto x: memo){
        cout << x.first << " " << x.second<<"\n";
    }
}