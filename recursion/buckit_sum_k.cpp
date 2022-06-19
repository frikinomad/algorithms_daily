//right answer but time limit exceeding, use dynamic programming

//divide the array into k parts with each partition having same sum
#include<bits/stdc++.h>
using namespace std;
bool bsum(int i, int bucketNum, int bucketSum, int reqsum, int k, vector<int>&nums, vector<int>&picked){

    if(bucketNum == k+1) return true;

    if(bucketSum == reqsum){    //i.e. current bucket is full so move to next bucket
        return bsum(0,bucketNum+1, 0, reqsum, k, nums, picked); 
    }

    if(bucketSum > reqsum) return false;
    if(i > nums.size()) return false;

    if(picked[i]==1){
        return bsum(i+1,bucketNum, bucketSum, reqsum, k, nums, picked);
    }else{
        
        //including the element
        bucketSum+=nums[i];
        picked[i] = 1;
        bool op1 = bsum(i+1,bucketNum, bucketSum, reqsum, k, nums, picked);

        //not including
        bucketSum-=nums[i];
        picked[i] = 0;
        bool op2 = bsum(i+1,bucketNum, bucketSum, reqsum, k, nums, picked);

        return op1 | op2;
    }
}
int main(){
    int k=3;
    vector<int> nums{4,3,1,3,4,3,1,2};
    vector<int> picked(nums.size(), 0);
    int sum = 0;
    accumulate(nums.begin(), nums.end(), sum);
    if(sum%k!=0) return false;
    int reqsum = sum/k;
    cout << bsum(0,1,0,reqsum,k,nums,picked);
}