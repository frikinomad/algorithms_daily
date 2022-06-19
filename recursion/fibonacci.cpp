#include<bits/stdc++.h>
using namespace std;
//considering 1st index is 1 based, if 0 based then n==1 & n==0 return 1
int fib(int n){
    if(n==2 || n==1)
        return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n=10;    //find the nth term of fibbonacci series
    cout << fib(n);
}