//subset with repeating elements

#include<bits/stdc++.h>
using namespace std;
void find_subset(vector<int> v, int i, vector<int> sub, vector<vector<int>>&ans){
    
    if(i==v.size()){
        ans.push_back(sub);
        return;
    }

    sub.push_back(v[i]);
    find_subset(v,i+1, sub, ans);

    sub.pop_back();
    while(i+1 < v.size() && v[i+1] == v[i]){
        i++;
    }
    find_subset(v,i+1, sub,ans);
}
int main(){
    vector<int> v{1,2,3};
    vector<vector<int>> ans;
    vector<int> sub;
    sort(v.begin(), v.end());
    find_subset(v,0,sub, ans);
    for(vector<int> x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    } 
}       