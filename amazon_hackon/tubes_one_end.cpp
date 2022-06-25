#include<bits/stdc++.h>
using namespace std;
vector<int> elements(vector<vector<int>>&t){
    vector<int> tube;
    vector<int> ans; // to return;
    map<int, int> memo;     // num, freq
    for(auto x: t){
        if(x[0] == 1){
            tube.push_back(x[1]);
        }else{
            // create a hash map, sorted and return accordingly
            for(int y: tube){
                if(memo[y]) memo[y]++;
                else memo[y] = 1;
            }
            
        }
    }
} 
int main(){
    vector<vector<int>> t {{1,62}, {1,49}, {2,-1}};
    vector<int> ans = elements(t);
}