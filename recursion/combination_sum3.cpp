// sum with number of elements = k whose sum = n

#include<bits/stdc++.h>
using namespace std;

void comb3(int i, int k, int n, int csum, vector<int>&sub, vector<vector<int>>&ans){
        
    if(csum > n) return;
    
    if(k==0){
        if(csum == n)
            ans.push_back(sub);
        return;
    }
    
    if(i==10) return;
    
    //pick this element
    csum+=i;
    sub.push_back(i);
    comb3(i+1,k-1,n,csum,sub,ans);
    csum-=i;
    sub.pop_back();
    
    
    //not picking this element
    comb3(i+1,k,n,csum,sub,ans);
        
}
int main(){
    int n=7;
    int k=3;
    vector<int> sub;
    vector<vector<int>> ans;
    int csum=0;
    comb3(1,k,n,csum,sub,ans);
    
    for(auto x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
}