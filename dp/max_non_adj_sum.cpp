// find max sum of non adjacent elements
#include <bits/stdc++.h>
using namespace std;
int help(vector<int> v, int n){     //recursion
    
    if(n == 0) return v[0];
    if(n<0) return 0;

    int incl = help(v, n-2) + v[n];
    int excl = help(v, n-1) + 0; 
    return max(incl, excl);
}
int help2(vector<int>& v, int n,vector<int>& dp){       //memoization
    
    if(n<0) return 0;
    if(n == 0) return v[0];

    if(dp[n] != -1)
        return dp[n];

    int incl = help2(v, n-2, dp) + v[n];
    int excl = help2(v, n-1, dp) + 0; 
    dp[n] = max(incl, excl);
    return dp[n];
}
int help3(vector<int>& v, int n){       //tabulation
    
    vector<int> dp(n,0);
    dp[0] = v[0];       //use the base case to populate the initial value
    for(int i=1;i<n;i++){
        int incl = dp[i-2] + v[i];
        int excl = dp[i-1] + 0; 
        dp[i] = max(incl, excl);
    }
    return dp[n-1];
}
int help4(vector<int>& v, int n){       //space optimization
    
    int prev1 = v[0];
    int prev2 = 0;
    for(int i=1;i<n;i++){
        int incl = prev2 + v[i];
        int excl = prev1 + 0; 
        int ans = max(incl, excl);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int main(){
    vector<int> v{2,1,4,9};
    // cout << help(v,v.size()-1);

    //memoization
    // vector<int> dp(v.size(), -1);   //using arr over maps has less time complexity
    // cout << help2(v,v.size()-1,dp);

    //tabulation
    // cout << help3(v,v.size());

    //space optimization
    cout << help4(v,v.size());
}