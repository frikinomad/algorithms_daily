#include<bits/stdc++.h>
using namespace std;

void decode(int i, int&ans, string s, string t, unordered_map<string, char>&memo, vector<string>&final){
    
    if(i==s.size()){
        final.push_back(t);
        if(memo[t])
            ans++;
        return;
    }
    
    t.push_back(s[i]);
    decode(i+1, ans, s, t, memo,final);
    t.pop_back();
    
    decode(i+1, ans, s, t, memo,final);
    
}
int main() {
    string s = "12";

    //create a dictionary with numebrs and alphabets
    // "1" -> 'A'
    unordered_map<string, char> memo;
    for(int i=0;i<26;i++){
        string x = to_string(i+1);
        memo[x] = i+65;
    }
    //decode the letters and find all subusets for the same and the ones that have corresponding alphabet keep them
    int ans=0;
    string t="";
    vector<string> final;
    decode(0,ans,s,t,memo,final);
    cout << ans;
}