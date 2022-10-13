// not working

#include<bits/stdc++.h>
using namespace std;
//using heapify
void heapify(vector<int>& arr, int i, int n){
    int largest = i;
    int left = 2*i+1; //since 0 based indexing
    int right = 2*i+2; // since 0 based indexing

    if(left <= n && arr[largest]<arr[left]){         //since min heap
        largest = left;
    }
    
    if(right <= n && arr[largest]<arr[right]){         //since min heap
        largest = right;        //change the index, later swap
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, largest, n);   //since swapped now this might be in wrong position so fix this
    }
}
int main(){
    vector<int> v{1,2,3,6,2,3,4,7,8};
    // vector<int> v{54, 53, 55, 52, 50};
    int n = v.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(v, i, n);
    }
    for(int i: v){
        cout << i << " ";
    }
}