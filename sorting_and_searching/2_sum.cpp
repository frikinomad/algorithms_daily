#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums{3,2,4};
	int target = 6;
    map<int, int> memo;
    int value;
    vector<int> f;
    for(int i=0;i<nums.size();i++){
        if(target < nums[i]){
            value = target - nums[i];
            if(memo[value]){
                f.push_back(memo[value]);
                f.push_back(i);
                break;
            }else{
                memo[nums[i]] = i;
            }
        }
    }
    for(int x: f){
    	cout << x << " ";
	}	
}
