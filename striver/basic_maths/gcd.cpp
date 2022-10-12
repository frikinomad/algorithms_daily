//using ecludiean theorem
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(a, a%b);
}
int main(){
    int a=4, b=8;
    cout << gcd(a,b);
}