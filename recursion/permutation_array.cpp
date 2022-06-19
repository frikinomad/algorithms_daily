//permutation with repeating elements
#include<bits/stdc++.h>
using namespace std;
void permute(vector<int>& v, int pos, vector<vector<int>>& ans){
    if(pos>=v.size()){
        ans.push_back(v);
        return;
    }
    
    for(int i=pos; i<v.size(); i++){
        swap(v[i], v[pos]);
        permute(v, pos+1, ans);
        swap(v[pos], v[i]);
    }
}
int main(){
    vector<int> v{1,2,3};
    vector<vector<int>> ans;
    permute(v, 0, ans);

    for(vector<int> x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
}

