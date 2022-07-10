#include<bits/stdc++.h>
using namespace std;
int help(int n, int x, int y, int z){
    
    if(n==0) return 0;
    if(n<0) return INT_MIN;

    int a = help(n-x, x, y, z) +1;
    int b = help(n-y, x, y, z) +1;
    int c = help(n-z, x, y, z) +1;

    int ans = max(a, max(b,c));
    return ans;
}
int help2(int n, int x, int y, int z, vector<int>& dp){     //memoization
    
    if(n==0) return 0;
    if(n<0) return INT_MIN;

    if(dp[n] != -1)
        return dp[n];

    int a = help(n-x, x, y, z) +1;
    int b = help(n-y, x, y, z) +1;
    int c = help(n-z, x, y, z) +1;

    dp[n] = max(a, max(b,c));
    return dp[n];
}
int help3(int n, int x, int y, int z){
    vector<int> dp(n+1, INT_MIN);
    dp[0]=0;
    for(int i=1;i<=n;i++){          //i<=n not i<n cause n+1 therefore have to include n
        if(i-x>=0)
            dp[i] = max(dp[i],dp[i-x] + 1);
        if(i-y>=0)
            dp[i] = max(dp[i],dp[i-y] + 1);
        if(i-z>=0)
            dp[i] = max(dp[i],dp[i-z] + 1);
    }
    if(dp[n] < 0) return 0;     //returning dp[n] cause total elements n+1
    else return dp[n];
}
int main(){
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;
    
    //recursion
    // int ans = help(n,x,y,z);
    // if(ans < 0)
    //     cout << 0;
    // else cout << ans;


    //memoization
    // vector<int> dp(n+1,-1);     //dk why building arr of n+1 length ?
    // int ans = help2(n,x,y,z,dp);
    // if(ans < 0)
    //     cout << 0;
    // else cout << ans;

    //tabulation
    cout << help3(n,x,y,z);
    // if(ans < 0)
    //     cout << 0;
    // else cout << ans;

}