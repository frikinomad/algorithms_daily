//permutations with non-repeating elements
#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&v, vector<vector<int>>&ans, int pos){
    if(pos==v.size()){
        if(find(ans.begin(), ans.end(), v)==ans.end()){
            ans.push_back(v);    
        }
    }
    for(int i=pos; i<v.size(); i++){
        swap(v[i], v[pos]);
        permutation(v, ans, pos+1);
        swap(v[pos], v[i]);
    }
}
int main(){
    vector<int> v{1,2,2};
    vector<vector<int>> all;
    int pos=0;
    permutation(v,all,0);
    for(vector<int> x: all){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
    // cout << (find(all.begin(), all.end(), v) != all.end());
}
