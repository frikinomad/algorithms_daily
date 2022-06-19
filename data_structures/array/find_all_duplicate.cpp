#include<bits/stdc++.h>
using namespace std;
int main(){
//	vector<int> nums{4,3,2,7,8,2,3,1};
	vector<int> nums{1,1};

    vector<int> v(nums.size()+1, 0);
    for(int i=0;i<nums.size();i++){
    	cout << v[nums[i]] << "\n";
        v[nums[i]]+=1;
    }
    for(int x: v){
    	cout << x << " ";
	}
    vector<int> f;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) f.push_back(v[i]);
    }
//    for(int x: f){
//        cout << x << ' ';	
//	}
}
