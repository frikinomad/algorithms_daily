#include<bits/stdc++.h>
using namespace std;
int climb(int i, int n, int &count, map<int, int>&memo){
    if(i==n){
        count++;
        return;
    }
    if(i>n) return;
    if(memo[n-count]) {
        return memo[n-count];
    }
    memo[n-count] = climb(i+1,n,count,memo);
    memo[n-count] = climb(i+2,n,count,memo);
    // return 
}
int main(){
    int count=0;
    int n = 3;
    map<int, int> memo;
    climb(0,n,count,memo);
    cout << count;
}