#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums1{1,2};
    vector<int> nums4{-2,-1};
    vector<int> nums3{-1,2};
    vector<int> nums2{0,2};
    int cnt = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i < nums1.size(); i++)
    {
        for(int j = 0; j < nums2.size(); j++)
        {
            int sum = nums1[i] + nums2[j];
            mp[sum]++;
        }
    }
    for(auto x: mp){
        cout << x.first << " " << x.second << "\n";
    }
    cout << "\n";
    for(int i = 0; i < nums3.size(); i++)
    {
        for(int j = 0; j < nums4.size(); j++)
        {
            int sum = (-1) * (nums3[i] + nums4[j]);
            if(mp[sum]){
                cout << sum << " ";
                cnt += mp[sum];
            }
        }
    }
    cout << cnt;
}