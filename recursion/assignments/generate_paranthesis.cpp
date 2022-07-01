#include<bits/stdc++.h>
using namespace std;
bool isvalid(string &temp){
    //this function will check if valid or not, if not then return false
    stack<char> st;
    //keep insering in stack until a closing is found
    // and by the end of arr traversal, stack should be empty
    for(auto x: temp){
        if(x == '{') st.push(x);
        else if(x == '}'){
            if(st.top() == '{'){
                st.pop();
            }
        }
    }
    if(st.empty()) return true;
    else return false;
}
void match(int i, int n, string temp, string &v, vector<string> &ans){
    if(i>=v.size() && isvalid(v)){
        // && isvalid(temp)
        ans.push_back(v);
        return;
    }
    for(int j=i; j<v.size(); j++){
        swap(v[j], v[i]);
        match(i+1,n,temp,v,ans);
        swap(v[i], v[j]);
    }
    // temp.push_back(v[i]);
    // match(i+1,n,temp,v,ans);
    // temp.pop_back();

    // match(i,n,temp,v,ans);
}
int main(){
    int n = 2;
    // n is no of pair, 1 means 2 brackets, 2 means 4 brackets
    string s;
    for(int i=0;i<n;i++){
        s.push_back('{');
        s.push_back('}');
    }
    // cout << s;
    vector<string> ans;
    ans.push_back(s);
    string temp;
    match(0,n,temp,s,ans);
    for(auto x: ans){
        cout << x << "\n";
    }
}
