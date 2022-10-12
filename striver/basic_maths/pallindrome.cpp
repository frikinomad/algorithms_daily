#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int new_num=0;
    while(n!=0){
        int digit = n%10;
        new_num = new_num*10+digit;
        n = n/10;
    }
    return new_num;
}
int main(){
    int n = 121;
    int x = reverse(n);
    cout << (n==x?"A pallindrome":"not a pallindrome");
}