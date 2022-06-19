#include<bits/stdc++.h>
using namespace std;
bool sort_key(vector<int> v1, vector<int> v2){
    return (v1[0] < v2[0]); 
}
int main(){
    vector<vector<int>> v{{2,2}, {1,3}}; 
    sort(v.begin(), v.end(), sort_key);
}