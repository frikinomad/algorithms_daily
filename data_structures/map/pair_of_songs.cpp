//https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> time{30,20,150,100,40};
	int count=0;
	vector<int> p(60,0);
	for(int i=0;i<time.size();i++){
		int rem = time[i]%60;
		if(!rem) count += p[0];	//i.e. rem is not zero, !rem means if 0
		else count += p[60-rem];
		p[rem] += 1;
	}
	cout << count;
}
