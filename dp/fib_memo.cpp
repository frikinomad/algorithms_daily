//nth fib no using DP memoization 
// 1,1,2,3 and so on, not taking from 0, if from 0 then make n<=1
#include<bits/stdc++.h>
using namespace std;
int fib(int n, map<int, int>& memo){
    if(n<= 2) return 1;
    if(memo[n]) return memo[n];
    
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}
int main(){
    int n=5;    //1,1,2,3,5
    map<int, int> memo;
    cout << fib(n,memo);
}