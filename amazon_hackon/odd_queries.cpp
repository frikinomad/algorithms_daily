#include<bits/stdc++.h>
using namespace std;
void oddq(int q, vector<int>&v, vector<vector<int>>& query){
    int count=0;
    map<int, int> memo;
    for(auto x: query){
        if(x[0] == 1){
            v[x[1]] = x[2];
        }else{
            for(int i=x[1]-1;i<x[2]-1;i++){
                if(memo[v[i]]) memo[v[i]]++;
                else memo[v[i]] = 1;
            }
            for(auto y: memo){
                if(y.second%2!=0) count++;
            }
            cout << count << " ";
        }
    }
}
int main(){
    vector<int> v{1,2,3,2};
    int q = 3;
    vector<vector<int>> query{{2,1,3}, {1,2,4}, {2,1,4}};
    oddq(q,v,query);

    //output: for each query of type 2, return no of elements in the range l to r, space seperated for each query
    // 1 based indexing - IMP
    // type 1 query: replace ith element with v
    // type 2 query: no of integers that have an odd count b/w range l to r
    // odd count means, b/w l to r in the array, find the freq of the elements and display the ones with odd count
    // ex: [2,1,3] - type 2, l=1, r=3
}