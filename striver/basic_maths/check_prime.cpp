#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i == 0)
            return false;
    }
    return true;
}
int main(){
    int a = 100;
    cout << prime(a);
}