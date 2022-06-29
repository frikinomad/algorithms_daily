//search same name of github
#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int sum=0;
    int j=0;
    int min_len = INT_MAX;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        while(sum>=target){
            sum-=nums[j];
            min_len = min(min_len, i-j+1);
            j++;
        }
    }
    if(min_len == INT_MAX){
        return 0;
    }
    return min_len;
}
int main(){
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout << minSubArrayLen(target, nums);
}
