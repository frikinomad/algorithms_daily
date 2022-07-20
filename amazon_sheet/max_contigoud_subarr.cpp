#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{5,4,-1,7,8};
    //sliding window
    int max_now=0, max=INT_MIN;
    for(int x: nums){
        if(max_now>=0)
            max_now+=x;
        else
            max_now=x;
        if(max_now>max){
            max=max_now;
        }
    }
    return max;
}