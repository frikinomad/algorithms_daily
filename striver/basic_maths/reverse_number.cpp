#include<bits/stdc++.h>
using namespace std;
void reverse(int n){
    int new_num=0;
    while(n!=0){
        int digit = n%10;
        new_num = new_num*10+digit;
        n = n/10;
    }
    cout << new_num;
}
int main(){
    int n = 123;
    reverse(n);
}