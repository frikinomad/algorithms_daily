//using a isSafe function to check if the position we need to place the queen is safe or not

#include<bits/stdc++.h>
using namespace std;

bool issafe(int i, int j, int n, vector<vector<int>>&board){
    // up, checking if the space just above has a queen or not 
    int ti=i;
    while(ti >= 0){
        if(board[ti][j] == 1) return false;
        ti--;
    }

    // top left, checking if the space just left diagnol has a queen or not
    ti=i; int tj = j;
    while(ti >= 0 && tj <= n-1){
        if(board[ti][tj] == 1) return false;
        ti--; tj++;
    }

    // top right, checking if the space just right diagnol has a queen or not
    ti=i, tj = j;
    while(ti >= 0 && tj <= n-1){
        if(board[ti][tj] == 1) return false;
        ti--; tj--;
    }

    return true;        //if none of the above is false then return true
}

void fillboard(int i, int n, vector<vector<int>>& board, vector<vector<int>>& ans){

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
        if(issafe(i,j,n,board)){     //check if the current position is safe
            board[i][j] = 1;        //since safe place therefore mark as 1
            fillboard(i+1,n,board,ans);
            board[i][j] = 0;        //backtracking step
        }
    }
}
int main(){
    int n=4;  // place n number of queens on a n*n chessboard, place 1 queen on each row
    vector<vector<int>> board(n, vector<int>(n,0));
    vector<vector<int>> ans;
    fillboard(0,n,board,ans);
    for(auto x: ans){
        for(int y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
}