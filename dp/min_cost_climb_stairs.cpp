#include<bits/stdc++.h>
using namespace std;

int help(vector<int> &cost, int n, map<int, int>& memo){
    if(n==0) return cost[0];
    if(n==1) return cost[1];
    if(memo[n]) return memo[n];
    if(memo[n]) return memo[n];
    memo[n] = min(help(cost, n-1, memo), help(cost, n-2, memo)) + cost[n];
    return memo[n];
}
int main() {
    vector<int> cost{1,100,1,1,1,100,1,1,100,1};
    int n = cost.size();
    map<int, int> memo;
    // vector<int> memo(n+1, -1);
    int ans = min(help(cost, n-1, memo), help(cost, n-2, memo));
    cout << ans;
}