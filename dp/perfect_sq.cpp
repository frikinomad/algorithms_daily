#include<bits/stdc++.h>
using namespace std;
int help(int target){       //recursion
    
    if(target == 0)
        return 0;            //cause to make 0 need 0

    int ans = target+1;      //any value greater then target cause all other value of i*i will be less than target cause for loop is <=target 
    for(int i=1;i*i<=target;i++){
        ans = min(ans, 1+help(target - i*i));
    }
    return ans;
}
int help1(int target, vector<int>& dp){       //memoization
    
    if(target == 0)
        return 0;            //cause to make 0 need 0

    if(dp[target] != -1)
        return dp[target];

    int ans = target+1;      //any value greater then target cause all other value of i*i will be less than target cause for loop is <=target 
    for(int i=1;i*i<=target;i++){
        ans = min(ans, 1+help1(target - (i*i), dp));
    }
    dp[target] = ans;
    return dp[target];
}
int help2(int target){       //tabulation

    vector<int> dp(target+1, INT_MAX);
    dp[0] = 0;

    for(int i=1;i<=target;i++){
        for(int j=1;j*j<=target;j++){
            int temp = j*j; 
            if(i-temp >= 0)
                dp[i] = min(dp[i], 1 + dp[i - temp]);     //i is target
        }
    }
    return dp[target];
}
int main(){
    int target=100;
    
    //recursion
    // cout << help(target);   

    //memoization
    // vector<int> dp(target+1, -1);
    // cout << help1(target,dp);

    //tabulation
    cout << help2(target);
}
