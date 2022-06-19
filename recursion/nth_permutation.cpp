#include<bits/stdc++.h>
using namespace std;

//incomplete in leetcode question they want the answer in a diff permutation 

void permutation(vector<int>v, int pos, vector<vector<int>>&ans){
    if(pos>=v.size()){
        ans.push_back(v);
        return;
    }
    for(int i=pos;i<v.size();i++){
        swap(v[i], v[pos]);
        permutation(v,pos+1,ans);
        swap(v[pos], v[i]);
        }
}
int main() {
    int n=3;
    int k=3;
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    vector<vector<int>> ans;
    permutation(v,0,ans);
    for(int x: ans[k-1]){
        cout << x << " ";
    }
    cout << "\n";
    for(vector<int> x: ans){
        for(int y: x)
            cout << y << " ";
        cout << "\n";
    }
    // string s;
    // for(int x: ans[k]){
    //     s+=to_string(x);
    // }
    // cout << s;
}