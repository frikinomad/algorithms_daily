#include<bits/stdc++.h>
using namespace std;
int help(int n, vector<int>& cost, vector<int>& days, int index){     //recursion
    if(index >= n){
        return 0;       //i.e if i if days are ended then no need to continue
    }
    
    //using cost for 1 day, therefore used cost[0]
    int op1 = cost[0] + help(n,cost,days,index+1);

    //using cost for 7 days
    int i;
    for(i=0;i<n && days[i] < days[index] + 7;i++);      //move i by 7 days, (i is not index)

    int op2 = cost[1] + help(n,cost,days,i);
    
    //using cost for 30 days
    for(i=0;i<n && days[i] < days[index] + 30;i++);      //move i by 7 days, (i is not index)

    int op3 = cost[2] + help(n,cost,days,i);

    return min(op1, min(op2, op3));
}
int help1(int n, vector<int>& cost, vector<int>& days, int index, vector<int> dp){     //memoization
    if(index >= n){
        return 0;       //i.e if i if days are ended then no need to continue
    }
    
    if(dp[index] != -1){
        return dp[index];
    }

    //using cost for 1 day, therefore used cost[0]
    int op1 = cost[0] + help1(n,cost,days,index+1,dp);

    //using cost for 7 days
    int i;
    for(i=0;i<n && days[i] < days[index] + 7;i++);      //move i by 7 days, (i is not index)

    int op2 = cost[1] + help1(n,cost,days,i,dp);
    
    //using cost for 30 days
    for(i=0;i<n && days[i] < days[index] + 30;i++);      //move i by 7 days, (i is not index)

    int op3 = cost[2] + help1(n,cost,days,i,dp);

    dp[index] = min(op1, min(op2, op3));
    return dp[index];
}
int help2(int n, vector<int>& cost, vector<int>& days, int index){     //tabulation
    
    vector<int> dp(n+1, INT_MAX);

    dp[n] = 0;
    
    for(int k=n-1;k>=0;k--){
        //using cost for 1 day, therefore used cost[0]
        int op1 = cost[0] + dp[k+1];

        //using cost for 7 days
        int i;
        for(i=0;i<n && days[i] < days[k] + 7;i++);      //move i by 7 days, (i is not index)

        int op2 = cost[1] + dp[i];
        
        //using cost for 30 days
        for(i=0;i<n && days[i] < days[k] + 30;i++);      //move i by 7 days, (i is not index)

        int op3 = cost[2] + dp[i];
        
        dp[k] = min(op1, min(op2, op3));
    
    }
    return dp[0];
}
int main(){
    vector<int> cost{2,7,15};
    vector<int> days{1,4,6,7,8,20};
    int n = days.size();

    //recursion
    // cout << help(n,cost, days,0);        

    //memoization
    // vector<int> dp(n+1, -1);
    // cout << help1(n,cost, days,0,dp);        

    //tabulation
    cout << help2(n,cost, days,0);        
}