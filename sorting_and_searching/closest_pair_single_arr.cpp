#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v{10, 22, 28, 29, 30, 40};
	int x = 54;
	int diff = INT_MAX;
	int l=0, r=v.size()-1;
	int res_l, res_r;
	while(l<v.size() && r>=0){
		if(abs(v[l] + v[r] - x) < diff){
			res_l = l;
			res_r = r;
			diff = abs(v[l] + v[r] - x);
		}
		if(v[l] + v[r] < x) l++;
		else r--;
	}
	cout << v[res_l] << " " << v[res_r];
}
