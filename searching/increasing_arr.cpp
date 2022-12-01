#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, count = 0;
	
	cin >> n;
	
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(v[j] < v[min]){
				min = j;
			}
		}
		if(i != min){
			count++;
			int t = v[min];
			v[min] = v[i];
			v[i] = t;
		}
	}
	cout << count;
}
