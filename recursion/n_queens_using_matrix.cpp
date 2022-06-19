//using a isSafe function to check if the position we need to place the queen is safe or not

#include<bits/stdc++.h>
using namespace std;

void fillboard(int i, int n, vector<vector<int>>& board, vector<vector<int>>& ans, vector<int>&cols, vector<int>&tl, vector<int>&tr){

    if(i == n){                     
        vector<int> temp;
        // opening the array and then saving it, asked in question to return like this
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                // cout << board[j][k];
                temp.push_back(board[j][k]);
            }
        }
        ans.push_back(temp);
        return;
    }

    for(int j=0; j<n; j++){        //j is for columns and i is for rows
        if(cols[j] == 0 && tl[i-j+n-1] == 0 && tr[i+j] == 0){     //check if the current position is safe
            board[i][j] = 1;        //since safe place therefore mark as 1
            cols[j]= tl[i-j+n-1] = tr[i+j] = 1;  //i.e. now not safe to use since using the position at i,j so mark all else as unsafe
            fillboard(i+1,n,board,ans,cols, tl, tr);
            board[i][j] = 0;        //backtracking step
            cols[j]= tl[i-j+n-1] = tr[i+j] = 0;  //i.e. now safe to use since not using the position at i,j 
        }
    }
}
int main(){
    int n=4;  // place n number of queens on a n*n chessboard, place 1 queen on each row
    vector<vector<int>> board(n, vector<int>(n,0));
    vector<vector<int>> ans;
    
    vector<int> cols(n,0), tl(2*n,0), tr(2*n,0);

    fillboard(0,n,board,ans, cols, tl, tr);

    for(auto x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
}