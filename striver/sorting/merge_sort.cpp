#include<bits/stdc++.h>
using namespace std;
void mergeSort(vector<int> v, int n){
    //split in half arrays, until size is 1
    // then compare 2 halfs merge and keep doing untill all halfs are merged
    // edge case, array has odd values
}
int main(){
    vector<int> v{8,1,-9,4,9,7};
    int n = v.size();
    mergeSort(v, n);
    for(auto i: v){
        cout << i << " ";
    }
}