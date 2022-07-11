#include<bits/stdc++.h>
using namespace std;
int help(vector<int> v, int target){        //recursion
    if(target < 0)
        return 0;
    
    if(target == 0)
        return 1;

    int ans=0;
    for(int i=0;i<v.size();i++){
        ans += help(v,target-v[i]);
    }
    return ans;
}
int help1(vector<int> v, int target, vector<int> dp){        //memoization
    if(target < 0)
        return 0;
    
    if(target == 0)
        return 1;

    if(dp[target] != -1)
        return dp[target];

    int ans=0;
    for(int i=0;i<v.size();i++){
        ans += help(v,target-v[i]);
    }
    dp[target] = ans;
    return dp[target];
}
int help2(vector<int> v, int target){       //tabulation
    vector<int> dp(target+1);
    dp[0] = 1;      //acc to base case
    
    //i or index of the dp arr denotes the target i.e. 0 means target is 0, 1 = target is 1 and so on - so i = target or i means target
    int ans=0;
    for(int i=0;i<dp.size();i++){       //iterating over dp arr
        for(int j=0;j<v.size();j++)     //iterating over given vector
            if(i - v[j] >= 0)
                dp[i] += dp[i-v[j]];
    }
    return dp[target];                  //it cound be dp[n] but since n = target in this case as size is n for dp arr
}
int main(){
    vector<int> v{1,2,3};
    int  target = 4;

    //recursion
    // cout << help(v,target);

    //memoization
    // vector<int> dp(target+1, -1);   //target size cause want to store value corresponding to each target i.e. possible combinations for a target
    // cout << help1(v,target,dp);

    //tabulation
    cout << help2(v,target);
}