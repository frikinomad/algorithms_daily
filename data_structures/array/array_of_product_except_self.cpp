#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums{1,2,3,4};
	//prefix product * suffix prodcut using extra space
    //create prefix array for all elements and suffix array for all elements
    vector<int> pre(nums.size());
    pre[0] = 1;   //i.e. prefix product for 1st element is 1
        
    vector<int> suf(nums.size());
    //prefix array
    for(int i=1;i<nums.size();i++){
        pre[i] = nums[i-1] * pre[i-1];
    }
    //suffix array
    suf[nums.size()-1] = 1;     //suffix product for last element is 1
    for(int i=nums.size()-2;i>=0;i--){
        suf[i] = nums[i+1] * suf[i+1];
    }
    
//    for(int x: pre){
//        cout << x << " ";
//	}
//	cout << "\n";
//	for(int x: suf){
//		cout << x << " ";
//	}
	
	//to get the array of product except self just multiply each value of suffix to prefix
	for(int i=0;i<nums.size();i++){
		nums[i] = pre[i]*suf[i];
	}
	
}
