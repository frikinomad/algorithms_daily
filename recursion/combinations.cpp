#include<bits/stdc++.h>
using namespace std;
void comb(int i, int n, int k, vector<int>& t, vector<vector<int>>&ans){
    
    if(k>(n-i+1)){        //if elements to select are more than the remaining elements, obviously we cannot select now
        return;
    }

    if(k==0){  //wrote this base condition outside i>n cause if k==0 no need to go any further just return
        ans.push_back(t);
        return;
    }
    if(i>n) return;

    t.push_back(i);
    comb(i+1,n,k-1,t,ans);
    
    t.pop_back();
    comb(i+1,n,k,t,ans);
}
int main(){
    int n=4,k=3;
    vector<int> t;
    vector<vector<int>> ans;
    comb(1,n,k,t,ans);

    for(vector<int> x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }

}
