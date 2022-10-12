#include<bits/stdc++.h>
using namespace std;
void count1(int n){
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout << count;
}
void count2(int n){
    int count = floor(log10(n)+1);
    cout << count;
}
int main(){
    int n = 12345;
    // count1(n);
    count2(n);      //TODO: using log
}