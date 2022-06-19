//given a grid and you can move to either right or downward
#include<iostream>
#include<map>
using namespace std;
int grid(int n, int m, map<int,int> memo){
    if(n==1 && m==1)
        return 1;
    if(n==0 || m==0)
        return 0;
    return grid(n-1, m) + grid(n, m-1);
}
int main(){
    map<int,int> memo;
    int x = grid(18,18, memo);
    cout<<x;
}
