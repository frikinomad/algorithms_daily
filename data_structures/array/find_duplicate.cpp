#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums{1,2,3,4};

// using sorting
//	if(nums.size() == 0){
//        return false;
//    }
//    bool flag = false;
//    sort(nums.begin(), nums.end());
//    for(int i=1;i<nums.size();i++){
//        if(nums[i] == nums[i-1])
//            flag = true; 
//	}    
//    return flag;

//**********

//using map
//	bool flag=false;
//    map<int, int> memo;
//    for(int i=0;i<nums.size();i++){
//        auto p = memo.find(nums[i]);
//        if(p != memo.end()){
//            p->second++;
//            if(p->second > 1){
//                flag = true;
//            }
//        }else{
//            memo.insert(pair<int, int>(nums[i], 1));
//        }
//    }
//    cout << flag;
	
}
