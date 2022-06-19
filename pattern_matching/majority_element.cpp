#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int a[] = {2,2,1,1,1,2,2,};
	int n = sizeof(a)/sizeof(a[0]);
	vector<int> v(a,a+n);
	int res = 0, count = 0;
	res = *v.begin();
	for(int x: v){
		if(x==res){
			count++;
		}
		else{
			count --;
		}
		if(count<0){
			res = x;
		}
	}
}
