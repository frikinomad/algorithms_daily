#include<bits/stdc++.h>
using namespace std;
void help(vector<int>& nums, vector<vector<int>>& ans, int pos){
    if(pos >= nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=pos;i<nums.size();i++){
        swap(nums[i], nums[pos]);
        help(nums, ans, pos+1);
        swap(nums[pos], nums[i]);
    }
}
int main(){
    vector<int> nums{1,2,3};
    vector<vector<int>> ans;
    
    //recursion
    help(nums, ans, 0);
    for(auto x: ans){
        for(int y: x)
            cout << y << " ";
        cout << "\n";
    }

    
}