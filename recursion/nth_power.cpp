#include<bits/stdc++.h>
using namespace std;
int pow(int n, int p){
    if(p==1)
        return n;
    return n*pow(n, p-1);
}
int main(){
    int n=5, p=3;
    cout << pow(n,p);
}
