#include<bits/stdc++.h>
using namespace std;

void fill(int i, int j, vector<vector<int>>&image, int oldcolor, int newcolor, int n, int m){
    if(i<0 || j<0 || i==n || j==m || image[i][j] != oldcolor) return;
    image[i][j] = newcolor;
    fill(i+1,j,image,oldcolor,newcolor,n,m);    
    fill(i-1,j,image,oldcolor,newcolor,n,m);    
    fill(i,j+1,image,oldcolor,newcolor,n,m);    
    fill(i,j-1,image,oldcolor,newcolor,n,m);    
}

int main(){
    vector<vector<int>> image{{1,1,1},{1,1,0},{1,0,1}};
    int newcolor = 2;
    int sr=1, sc=1;
    
    int oldcolor = image[sr][sc];
    
    //exit if new color = old =color cause no need to change then
    if(newcolor == oldcolor) return;

    //n gives no of rows, m give no of columns
    int n = image.size(), m = image[0].size();
    fill(sr,sc,image,oldcolor, newcolor, n,m);
    
    for(auto x: image){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
}