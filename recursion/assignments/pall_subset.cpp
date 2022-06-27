// every substring of the partition is a palindrome
#include<bits/stdc++.h>
using namespace std;
void find_subset(string v, int i, vector<char> sub, vector<vector<char>>&ans){
    
    if(i==v.size()){
        vector<char> t = sub;
        reverse(t.begin(), t.end());
        if(sub == t && find(ans.begin(), ans.end(), sub)==ans.end())
            ans.push_back(sub);
        return;
    }

    sub.push_back(v[i]);
    find_subset(v,i+1, sub, ans);
    sub.pop_back();
    
    find_subset(v,i+1, sub,ans);
}
int main(){
    string s = "BaaB";
    vector<vector<char>> ans;
    vector<char> sub;
    find_subset(s,0,sub, ans);
    for(auto x: ans){
        for(char y: x){
            cout << y << " ";
        }
        cout << "\n";
    } 
}       