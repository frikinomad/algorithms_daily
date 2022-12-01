#include<bits/stdc++.h>
using namespace std;
int last_occ(vector<int> v, int result, int x){
	int low=0, high=v.size();
	while(low<high){
		int mid = (low + high)/2;
		if(v[mid] == 1){
			result = mid;
			low=mid+1;	//since arr in non decreasing order, normaly it is increasing order
		}else if(v[mid] < 1){
			high = mid -1;
		}
	}
	return result;
}

int main(){
	vector<int> v{0, 0, 0, 0, 0, 0, 0};
	int x = 1; 	//element to find
	int result = -1;  
	int l_res = last_occ(v, result, x);
	if(l_res != -1){
		cout << l_res+1;
	}else{
		cout << 0;
	}
}
