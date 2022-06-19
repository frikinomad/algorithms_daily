// see notes for detail
// taking sq matrxi only
//this code gives all the answers and not just one of the answer
#include<bits/stdc++.h>
using namespace std;

void findpath(int i, int j, int n, vector<vector<int>>&v, vector<string>&ans, string&path){

    if(i<0 || j<0 || i==n || j==n || v[i][j] == 0) return;  //
    else if(i == n-1 && j == n-1){
        ans.push_back(path);
        return;
    }

    v[i][j] = 0;    //marking like this so that doesn't visit 

    //down
    path.push_back('D');
    findpath(i+1,j,n,v,ans,path);
    path.pop_back();
    
    //left
    path.push_back('L');
    findpath(i,j-1,n,v,ans,path);
    path.pop_back();

    //right
    path.push_back('R');
    findpath(i,j+1,n,v,ans,path);
    path.pop_back();

    //up
    path.push_back('U');
    findpath(i-1,j,n,v,ans,path);
    path.pop_back();
    
    v[i][j] = 1;

}
int main(){
    // vector<vector<int>> v{{1,0,0,0}, {1,1,0,0,}, {1,1,0,0,}, {0,1,1,1}};
    vector<vector<int>> v{{1, 0, 0, 0}, {1, 1, 0, 0},{0, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans;
    string path;
    int n = 4;
    findpath(0,0,n,v,ans,path);

    for(auto x: ans){
        for(char y: x){
            cout << y << " ";
        }
        cout << "\t";
    }

}