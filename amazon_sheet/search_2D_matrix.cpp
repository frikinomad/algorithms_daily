#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    bool flag = false;
    for(auto x: matrix){
        if(target>=x[0] && target<=x[x.size()-1]){
            if(find(x.begin(), x.end(), target) != x.end())
                flag=true;
        }
    }
    cout << flag;
}