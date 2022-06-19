#include<bits/stdc++.h>
using namespace std;
void sub(int i, int k, vector<int> tsub, vector<int>&v, vector<vector<int>>&ans){
    
    if(i>v.size()){
        return;
    }

    if(i==v.size())
        if(accumulate(tsub.begin(),tsub.end(),0) == k){
        ans.push_back(tsub);
        return;
    }

    tsub.push_back(v[i]);
    sub(i+1,k,tsub,v,ans);
    tsub.pop_back();

    sub(i+1,k,tsub,v,ans);

}
int main(){
    vector<vector<int>> ans;
    vector<int> tsub;       //to hold the temperorary subset    
    // vector<int> v{2,4,6};
    vector<int> v{5,-2,0,-5,2};
    int k=0;
    sub(0,k,tsub,v,ans);
    for(vector<int> x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    } 
}