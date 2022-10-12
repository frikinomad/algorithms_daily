#include<bits/stdc++.h>
using namespace std;
void help1(int a){
    for(int i=1;i<=a/2;i++){
        if(a%i==0)
            cout << i << " ";
    }
    cout << a;
}
void help2(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << " ";
            if(i != n/i) cout << n/i << " ";
        }
    }
}
int main(){
    int a = 36;
    // help1(a);
    help2(a);
}