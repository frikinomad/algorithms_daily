#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<sqrt(n);i++){
		if(n%i==0){
			cout<< i << " ";
		}
	}
}
