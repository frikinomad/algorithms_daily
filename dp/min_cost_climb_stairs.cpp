#include<bits/stdc++.h>
using namespace std;

int help(vector<int> &cost, int n, map<int, int>& memo){
    if(n==0) return cost[0];
    if(n==1) return cost[1];
    
    if(memo[n]!= -1) return memo[n];

    memo[n] = min(help(cost, n-1, memo), help(cost, n-2, memo)) + cost[n];
    return memo[n];
}
int help2(vector<int>& cost, int n){
    vector<int> dp(n+1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(int i=2;i<n;i++){
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }
    return min(dp[n-1], dp[n-2]);
}

int main() {
    vector<int> cost{1,100,1,1,1,100,1,1,100,1};
    int n = cost.size();
    map<int, int> memo;
    // vector<int> memo(n+1, -1);
    // int ans = min(help(cost, n-1, memo), help(cost, n-2, memo));
    // cout << ans;
}