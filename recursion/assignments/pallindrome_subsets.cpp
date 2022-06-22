#include<bits/stdc++.h>
using namespace std;
void part(int i, string&s, vector<vector<string>>&ans, string temp){
    
    if(i == s.size()){
        string t = temp;
        reverse(temp.begin(),temp.end());
        if(temp == t){
            ans.push_back(temp);
        }
    }

    temp.push_back(s[i]);
    part(i+1,s,ans,temp);
    temp.pop_back();
    
    part(i+1,s,ans,temp);
}
int main(){
    // find all subsets nad check if they are pallindrome or not
    
    vector<string> ans;
    string temp;
    part(0,s,ans);
    return ans;
}