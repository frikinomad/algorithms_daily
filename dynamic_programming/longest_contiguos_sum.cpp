#include<bits/stdc++.h>
using namespace std;
int main(){
	//using kadance algo
	vector<int> v{-2,1,-3,4,-1,2,1,-5,4};
	int max=v[0], max_now=0;
	for(int x: v){
		if(max_now >= 0){
			max_now += x;
		}else{
			max_now = x;
		}
		if(max < max_now) max=max_now;
	}
	cout << max;
}
