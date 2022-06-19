#include<bits/stdc++.h>
using namespace std;

int first_occ(vector<int> v, int result, int x){
	int low=0, high=v.size();
	while(low<high){
		int mid = (low + high)/2;
		if(v[mid] == x){
			result = mid;
			low=mid+1;	//since arr in non decreasing order, normaly it is increasing order
		}else if(x < v[mid]){
			high = mid -1;
		}else {
			low = mid + 1;
		}
	}
	return result;
}

int last_occ(vector<int> v, int result, int x){
	int low=0, high=v.size();
	while(low<high){
		int mid = (low + high)/2;
		if(v[mid] == x){
			result = mid;
			high=mid-1;	//since arr in non decreasing order, normaly it is increasing order
		}else if(x < v[mid]){
			high = mid -1;
		}else{
			low = mid + 1;
		}
	}
	return result;
}

int main(){
	vector<int> v{5,7,8,8,8,10};
	int x = 8; 	//element to find
	int result = -1;  
	int f_res = first_occ(v, result, x);
	int l_res = last_occ(v, result, x);
	if(f_res != -1){
		cout << "first occurrence is " << f_res;
	}
	if(l_res != -1){
		cout << "last occurrence is " << l_res+1;
	}
}
