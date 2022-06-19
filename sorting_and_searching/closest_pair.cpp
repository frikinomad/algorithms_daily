#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v1 {1, 4, 5, 7};
	vector<int> v2 {10, 20, 30, 40};
	int x = 38;
	int diff = 10000000;
	int l = 0;
	int r = v2.size() - 1;
	int res_l, res_r; 	//variable to store indexes of min elements
	while(l<v1.size() && r>=0){
		if(abs(v1[l] + v2[r] - x) < diff){
			res_l = l; res_r = r;
			diff = abs(v1[l] + v2[r] - x);
		}
		//seperate condition from above, will run at all times
		if(v1[l] + v2[r] > x)
			r--; //since sorted array and v2 has highest elements since starting from end
		else l++;
	}
	cout << v1[res_l] << " " << v2[res_r];
}
