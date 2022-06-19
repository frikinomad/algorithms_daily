#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 150;
	if(n<=0){
        cout << false;
    }
    if(n==1){
        cout << true;
    }
        
    for(int x: {2,3,5}){
        while(n%x==0){
            n = n/x;
        }
    }
    cout << (n==1)?true:false;
}
