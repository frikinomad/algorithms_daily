#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		int n;
		cin >> n;
		int x;
		int count = 1, n_count = 1;
		for(int i=2;i<=sqrt(n);i++){
			int sq = i*i;
			int cube = i*i*i;
			if(sq<=n)	count++;
			if(cube<=n) count++;
		}
		cout << count << "\n";
	}
}
//1,000,000,000
