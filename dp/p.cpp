#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int getMaxPrimeFactor(int n) {
   int i, max = -1;
   while(n % 2 == 0) {
      max = 2;
      n = n/2; //reduce n by dividing this by 2
   }
   for(i = 3; i <= sqrt(n); i=i+2){ //i will increase by 2, to get
      while(n % i == 0) {
         max = i;
         n = n/i;
      }
   }
   if(n > 2) {
      max = n;
   }
   // cout << max << "\n"; 
   return max;
}
int help(int n, map<int, int>& dp){
    if(n==1) return 1;
    if(n==0) return 0;

    if(dp[n]){
        return dp[n];
    }

    int op1 = help(n-1, dp);
    int op2 = help(getMaxPrimeFactor(n), dp);

    // return max(op1, op2);
    dp[n] = min(op1, op2);
    return dp[n];
}
int main() {
   int n=20;
   // vector<int> dp(n, -1);
   map<int, int> dp;
   int count=1;
   while(n!=1){
      int x = getMaxPrimeFactor(n);
      if(x == n){
         n--;
      }else{
         n = x;
      }
      count++;
   }
   cout << count;

   //  int x = help(n, dp);
   //  cout << x;
}