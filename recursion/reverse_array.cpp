#include<bits/stdc++.h>
using namespace std;
void reverse_array(int i, int n, vector<int> &v){
    int t = v[i];
    v[i] = v[n];
    v[n] = t;
    i+=1; n-=1;
    if(i>n) return;
    reverse_array(i, n, v); 
}
int main(){
    vector<int> v{5,4,3,2,1};
    reverse_array(0, v.size()-1, v);
    for(int x: v){
        cout << x << "\t";
    }
}
