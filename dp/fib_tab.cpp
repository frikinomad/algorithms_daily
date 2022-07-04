//nth fib no using DP memoization 
// 0,1,1,2,3 and so on, if want from 1 then put dp[0] = 1 & dp[1] = 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;    //0,1,1,2,3
    vector<int> dp(n-1);
    //filling the inital values using base condition
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n-1];
}