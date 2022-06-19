#include<bits/stdc++.h>
using namespace std;
void union_arr(vector<int> v1, vector<int> v2){
	int i=0,j=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i] < v2[j]){
			cout << v1[i] << "\t";
			i++;
		}else if(v1[i] > v2[j]){
			cout << v2[j] << "\t";
			j++;
		}else if(v1[i] == v2[j]){
			cout << v1[i] << "\t";
			i++; j++;
		}
	}
	//priniting remaining elements
	if(i<v1.size()){
		for(int k=i;k<v1.size();k++){
			cout << v1[k] << "\t";
		}
	}else if(j<v2.size()){
		for(int k=k;k<v2.size();k++){
			cout << v2[k] << "\t";
		}
	}
}
void intersection(vector<int> v1, vector<int> v2){
	int i=0,j=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i] < v2[j]){
			//not printing here just move forward
			i++;
		}else if(v1[i] > v2[j]){
			j++;
		}else if(v1[i] == v2[j]){
			cout << v1[i] << "\t";
			i++; j++;
		}
	}
	//priniting remaining elements
	if(i<v1.size()){
		for(int k=i;k<v1.size();k++){
			cout << v1[k] << "\t";
		}
	}else if(j<v2.size()){
		for(int k=k;k<v2.size();k++){
			cout << v2[k] << "\t";
		}
	}
}
int main(){
	vector<int> v1{1, 3, 4, 5, 7};
	vector<int> v2{2, 3, 5, 6};
	union_arr(v1, v2);
	cout << '\n';
	intersection(v1, v2);
}
