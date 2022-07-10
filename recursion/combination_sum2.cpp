//combination sum with repeated elements
//not working for all test cases
#include<bits/stdc++.h>
using namespace std;

void comb2(int i, vector<int>& v, vector<int>&sub, vector<vector<int>>&ans, int csum, int target){
    
    if(csum == target){
        ans.push_back(sub);
        return;
    }

    if(csum > target) return;
    if(i == v.size() - 1) return;

    sub.push_back(v[i]);
    csum+=v[i];
    comb2(i+1, v, sub, ans, csum, target);
    sub.pop_back();
    csum-=v[i];

    while(i+1 < v.size()-1 && v[i] == v[i+1]) i++;      //since using repeating elements then increase i till the repeating element is not there
    comb2(i+1, v, sub, ans, csum, target);
}

int main(){
    int target=8;
    int csum=0;
    vector<int> v{10,1,2,7,6,1,5};
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    vector<int> sub;

    comb2(0, v, sub, ans, csum, target);
    
    for(auto x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
}