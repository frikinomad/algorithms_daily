#include<bits/stdc++.h>
using namespace std;
int n_sum(int n){
    if(n<0){
        return 0;
    }
    int sum = n + n_sum(n-1);
    return sum;
}
int main(){
    // n*(n+1)/2
    int n = 5;
    cout << n_sum(n);
}