#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix{{1},{3}};
    int target = 0;
    int c = matrix[0].size(); //no of columns
    int r=matrix.size();    //no of rows
    int s_r;                //to store selected row info
    bool flag = false; 
    
    if(r==1)
        s_r=0;
    else{
        for(int i=1;i<r;i++){
            if(matrix[i-1][0]<=target && matrix[i][0]>=target){
                //0, 0 = 0th row and 0th column
                s_r = i-1;
                break;
            }else{
                s_r = 10000;
            }
        }
    }
    if(s_r == 10000) flag=false;
    else{
        for(int i=0;i<c;i++){
            //i is for columns
            if(matrix[s_r][i]==target){
                flag = true;
                break;
            }
        }
    }
    if(r>1){
        if(matrix[s_r+1][0]==target)
        flag=true;
    }
    cout << flag;
}