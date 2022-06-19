#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v{9,4,1,5,0,2};
	int pivot = v[0];
	int p=0, q=v.size()-1;
	for(int i=0;i<1;i++){
		if(!(v[p] > pivot)){
			p++;
		}
		if(!(v[q] < pivot)){
			q++;
		}
		if(p>q){
//			swap q  and pivot
			int t=v[q];
			v[q] = v[3];
			v[3] = t;
		}else {
//			swap p and q
			int t = v[p];
			v[p] = v[q];
			v[q] = t;
		}
	}
	for(int x: v){
		cout << x << " ";
	}
}
