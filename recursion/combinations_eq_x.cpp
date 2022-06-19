//combination with sum equal given sum
#include<bits/stdc++.h>
using namespace std;

void findcomb(int i, vector<int>&v, int t, int csum, vector<int>&sub, vector<vector<int>>& ans){

    if(i > v.size()-1) return;

    if(csum == t){
        ans.push_back(sub);
        return;
    }

    if(csum > t) return;

    //not including the ith element
    findcomb(i+1, v, t, csum, sub, ans);

    //including the ith element
    csum += v[i];
    sub.push_back(v[i]);
    findcomb(i, v, t, csum, sub, ans);
    csum -= v[i];
    sub.pop_back();
}

int main(){
    vector<int> v{2,3,5};
    int t=8;    //target
    vector<int> sub;
    int csum=0;    //current sum
    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    findcomb(0, v, t, csum, sub, ans); //find combination

    for(auto x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
}