#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> v, const int low, const int mid, const int high){
	auto const l = (mid-left);
	auto const r = high-mid;
	vector<int> left(l);
	vector<int> right(r);

	//copy in left sub array
	for(int i=0;i<mid;i++){
		left.push_back(v[i]);
	}
	//copy in right sub array
	for(int i=mid;i<v.size();i++){
//		cout << i << " " << v[i] << " ";
		right.push_back(v[i]);
	}
	cout << left.size();
	for(int x: right){
		cout << x << " ";
	}
}

void merge_sort(vector<int> v, int low, int high){
	int mid = (low+high)/2;
//	merge_sort(v, low, mid);
//	merge_sort(v, mid+1, high);
	merge(v, low, mid, high);
}

int main(){
	vector<int> v{3,1,4,9,5,0};
	int low=0, high=v.size();
	merge_sort(v, low, high-1);
}
