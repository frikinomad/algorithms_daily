#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums{-1,0,1,2,-1,-4};
	sort(nums.begin(), nums.end());
    int sum = 0;
    int l, r;
    int threesum = 0;
    vector<vector<int>> v;
    for(int i=0;i<nums.size();i++){
        if(i > 0 && nums[i]==nums[i-1])
            continue;
        l = i+1; r=nums.size();
        vector<int> v1(3);
        while(l<r){
            threesum = nums[i] + nums[l] + nums[r];
            if(threesum > 0){
       	        r--;
        	}else if(threesum < 0){
                l++;
            }else{
                v1.push_back(nums[i]);
                v1.push_back(nums[l]);
                v1.push_back(nums[r]);
            }
            v.push_back(v1);
        }
    }
	for(int i=0;i<v.size();i++){
		for(int x: v[i]){
			cout << x << " ";
		}
	}
}
