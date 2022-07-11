#include<bits/stdc++.h>
using namespace std;
int help(int n){     //recursive
    if(n==1)
        return 0;       //no dearangements possible
    if(n==2)
        return 1;

    int ans = (n-1)*(help(n-1) + help(n-2));
    return ans;
}
int help2(int n, vector<int>& dp){    //memoization
    if(n==1)
        return 0;       //no dearangements possible
    if(n==2)
        return 1;

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = (n-1)*(help(n-1) + help(n-2));
    return dp[n];
}
int help3(int n){           //tabulation
    vector<int> dp(n+1);
    dp[1]=0;
    dp[2]=1;

    for(int i=3;i<(n+1);i++){
        int first = dp[i-1];
        int second = dp[i-2];
        int ans = first+second;
        dp[n] = ans*(n-1);
    }
    return dp[n];
}
int help4(int n){           //space optimization
    int prev2=0;
    int prev1=1;

    for(int i=3;i<(n+1);i++){
        int first = prev1;
        int second = prev2;
        int ans = first+second;
        prev2 = prev1;
        prev1 = ans*(n-1);
    }
    return prev1;
}
int main(){
    int n=3;

    //recursive
    // cout << help(n);
    
    //memoization
    // vector<int> dp(n+1,-1);
    // cout << help2(n,dp);

    //tabulation
    // cout << help3(n);

    //space optimization
    cout << help4(n);

}