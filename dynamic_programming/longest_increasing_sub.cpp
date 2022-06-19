#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{0,1,0,3,2,3};
    vector<int> lis(nums.size(), 1);            // using tabulation method, print this at end and see
    for(int i=nums.size()-1;i>=0;i--){          //loop in reverse starting from end
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]<nums[j])                 //starting from end and seeing if elements ahead of it are greater and wherever greater 
                                                //element is found use it's LIS value, and see which LIS value is Max (print LIS and see)
                lis[i] = max(lis[i], 1+lis[j]);
        }
    }
    // for(int x: lis){
    //     cout << x << " ";
    // }
    cout << *max_element(lis.begin(), lis.end());
}