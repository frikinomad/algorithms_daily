//using tabulation

#include<iostream>
using namespace std;
int fib(int n){
    int *table;
    table = new int[n+1] {0};   //if we just write [n] then 1 number will be less since fib(6) will have 7 element since 0 is the default
    table[1] = 1;
    for(int i=0;i<=n;i++){
        table[i+1] += table[i];
        table[i+2] += table[i];
    }
    return table[n];
}
int main(){
    int n = 6;
    int a = fib(n);
    cout<<a;
}
